#!/usr/bin/env python3
"""
generate_leetcode_index.py

Scans this repository for LeetSync-generated problem folders (named
"<number>-<problem-slug>"), extracts the problem title, difficulty, and
solution language from each, and rewrites the "Problems Solved" table
in README.md between the LEETCODE_TABLE_START / LEETCODE_TABLE_END
markers.

Run this any time after new problems have been synced, or wire it into
a GitHub Action to run automatically on every push (see the README
usage instructions for that setup).
"""

import os
import re
import sys

REPO_ROOT = os.path.dirname(os.path.abspath(__file__))
README_PATH = os.path.join(REPO_ROOT, "README.md")

START_MARKER = "<!-- LEETCODE_TABLE_START -->"
END_MARKER = "<!-- LEETCODE_TABLE_END -->"

# Folder name pattern LeetSync uses: "11-container-with-most-water"
FOLDER_PATTERN = re.compile(r"^(\d+)-(.+)$")

# Map file extensions to display language names
LANGUAGE_MAP = {
    ".java": "Java",
    ".py": "Python",
    ".cpp": "C++",
    ".c": "C",
    ".js": "JavaScript",
    ".ts": "TypeScript",
    ".go": "Go",
    ".rb": "Ruby",
    ".cs": "C#",
    ".kt": "Kotlin",
    ".swift": "Swift",
}

# Folders that are NOT LeetCode problem folders and should be skipped
SKIP_FOLDERS = {"Classwork", "Assignments", "LeetCode", ".git", ".github"}


def extract_title_and_difficulty(problem_readme_path):
    """Parse a LeetSync-generated per-problem README.md for the title,
    problem URL, and difficulty badge."""
    with open(problem_readme_path, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()

    title_match = re.search(
        r'<h2><a href="([^"]+)">([^<]+)</a></h2>', content
    )
    difficulty_match = re.search(
        r"Difficulty-(\w+)-", content
    )

    url = title_match.group(1) if title_match else None
    title = title_match.group(2) if title_match else "Unknown"
    difficulty = difficulty_match.group(1) if difficulty_match else "Unknown"

    return title, url, difficulty


def find_solution_language(folder_path):
    """Find the solution file in a problem folder (anything that isn't
    README.md) and map its extension to a display language."""
    for filename in os.listdir(folder_path):
        if filename == "README.md":
            continue
        ext = os.path.splitext(filename)[1].lower()
        if ext in LANGUAGE_MAP:
            return LANGUAGE_MAP[ext]
    return "Unknown"


def collect_problems():
    problems = []

    for entry in os.listdir(REPO_ROOT):
        full_path = os.path.join(REPO_ROOT, entry)

        if not os.path.isdir(full_path):
            continue
        if entry in SKIP_FOLDERS:
            continue

        match = FOLDER_PATTERN.match(entry)
        if not match:
            continue

        problem_number = int(match.group(1))
        readme_path = os.path.join(full_path, "README.md")

        if not os.path.isfile(readme_path):
            continue

        title, url, difficulty = extract_title_and_difficulty(readme_path)
        language = find_solution_language(full_path)

        problems.append({
            "number": problem_number,
            "title": title,
            "url": url,
            "difficulty": difficulty,
            "language": language,
            "folder": entry,
        })

    problems.sort(key=lambda p: p["number"])
    return problems


def build_table(problems):
    if not problems:
        return "<p><i>No solved problems found yet.</i></p>"

    rows = [
        "<table>",
        "<tr><th>#</th><th>Problem</th><th>Difficulty</th><th>Language</th></tr>",
    ]

    for p in problems:
        rows.append(
            f'<tr><td>{p["number"]}</td>'
            f'<td><a href="{p["folder"]}/">{p["title"]}</a></td>'
            f'<td>{p["difficulty"]}</td>'
            f'<td>{p["language"]}</td></tr>'
        )

    rows.append("</table>")
    return "\n".join(rows)


def update_readme(table_html):
    with open(README_PATH, "r", encoding="utf-8") as f:
        content = f.read()

    if START_MARKER not in content or END_MARKER not in content:
        print(
            "ERROR: Could not find LEETCODE_TABLE_START / "
            "LEETCODE_TABLE_END markers in README.md.\n"
            "Add these two lines around your table section first:\n"
            f"  {START_MARKER}\n  ...\n  {END_MARKER}"
        )
        sys.exit(1)

    pattern = re.compile(
        re.escape(START_MARKER) + r".*?" + re.escape(END_MARKER),
        re.DOTALL,
    )

    replacement = f"{START_MARKER}\n{table_html}\n{END_MARKER}"
    new_content = pattern.sub(replacement, content)

    if new_content == content:
        print("No changes needed - table is already up to date.")
        return False

    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_content)

    print(f"README.md updated with {len(problems)} problem(s).")
    return True


if __name__ == "__main__":
    problems = collect_problems()
    table_html = build_table(problems)
    changed = update_readme(table_html)

    if changed:
        print("Done. Review the changes, then commit and push:")
        print("  git add README.md")
        print('  git commit -m "docs: update LeetCode problems table"')
        print("  git push")
