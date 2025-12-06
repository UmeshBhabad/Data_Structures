# 🔗 Day 17 — Linked List Operations in C

### 📚 What I Learned Today

---

## I. 🧱 Linked List Introduction  
Understood the concept of a **singly linked list**, including:
- Node structure  
- Dynamic memory allocation  
- Self-referential pointers  
- Sequential node connection using `next` pointer  

Learned how linked lists allow dynamic data storage without fixed-size limitations.

---

## II. ⚙️ Linked List Operations  
Implemented all primary operations required to manage a linked list effectively.

---

### i. ➕ Insert Operations

#### a. InsertFirst  
Added a new node at the beginning of the linked list and updated the head pointer.

#### b. InsertLast  
Added a new node at the end of the list, traversing until the last node.

#### c. InsertAtPos  
Inserted a node at a specific position using:
- Traversal  
- Node linking adjustments  
- Validation for position range  

---

### ii. ➖ Delete Operations

#### a. DeleteFirst  
Removed the first node by updating the head pointer and freeing memory.

#### b. DeleteLast  
Traversed to the second-last node and removed the last node safely.

#### c. DeleteAtPos  
Removed a node from a specific position after:
- Position validation  
- Traversing  
- Re-linking the list  
- Memory deallocation  

---

### iii. 👁️ Display  
Traversed the list using a loop to print all node values in sequence.

---

### iv. 🔢 Count  
Counted the number of nodes by traversing through the entire linked list.

---

📅 **Focus of the Day:** Strengthening understanding of dynamic data structures, mastering linked list operations, and writing clean, modular functions for insertion, deletion, and traversal.
