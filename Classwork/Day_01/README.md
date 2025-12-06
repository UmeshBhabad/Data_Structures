# 🏗️ Day 16 — Structures, Pointers & Linked List Fundamentals in C

### 📚 What I Learned Today

---

## I. 🧱 Structure Declaration  
Understood how to define a structure using the `struct` keyword to group multiple data members.

---

## II. 🧩 Members of a Structure  
Explored how structures can hold heterogeneous data types (int, float, char, arrays, etc.).

---

## III. 📦 Structure Object  
Learned how to create structure variables (objects) to store data.

---

## IV. 🎯 Structure Member Initialization  
Practiced initializing structure members in multiple ways:
- Dot notation  
- Designated initialization  
- During declaration  

---

## V. 👉 Using `.` and `->` Operators  
- `.` (dot) → to access structure members via object  
- `->` (arrow) → to access members using a pointer to a structure  

---

## VI. 🧠 Dynamic Memory Allocation for Structures  
Allocated memory for structures using:
- `malloc()`  
- `calloc()`  
- `new` (in C++)  

Also learned how to access structure members after dynamic allocation.

---

## VII. 🔁 Self-Referential Structures  
Studied structures that contain pointers to the same structure type — foundation of linked lists.

---

## VIII. 🔄 `while` Loop for Traversal  
Used loops to traverse arrays, dynamic memory blocks, and linked structures.

---

## IX. 🔗 Call by Value & Call by Address  
Understood how structures behave when passed:
- By value → copy is passed  
- By address → actual structure can be modified  

---

## X. 🎯 Pointer to Structure  
Learned how structure pointers store structure addresses and help in dynamic operations.

---

## XI. 🎯 Pointer to Pointer to Structure  
Explored double pointers for advanced dynamic operations, linked list modifications, and node management.

---

## XII. 🏷️ `typedef` for Pointers  
Used `typedef` to create readable and clean pointer aliases:
```c
typedef struct Node* NODEPTR;

---

## XIII. 🔧 User-Defined Macros

Created custom macros using:

#define SIZE 10
#define PI 3.14

to simplify constants and expressions.

---

## XIV. 🔗 Linked List — Introduction

Understood fundamental concepts of singly linked lists:

Node creation

Node connection

Dynamic growth

---

## XV. 🔧 Linked List Operations (Intro)

Learned basic operations:

a. Insert

Adding nodes at beginning/end/middle.

b. Delete

Removing nodes safely and managing memory.

c. Display

Traversing the linked list using loops.

d. Count

Counting total nodes in the linked list.

---

## XVI. 📦 #pragma pack(1)

Explored how to control structure padding and reduce memory waste using packing directives.

---

📅 Focus of the Day: Building strong foundations for data structures, mastering structure behavior, pointer depth, and linked list basics in C.