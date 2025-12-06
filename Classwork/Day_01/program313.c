#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node                                         // Structure defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                           // Aliasing structure
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

// Call by value

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Display
// Description      :   Used to display elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)                           // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Count
// Description      :   Used to count elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE first)                              // Function defination
{
    return 0;
}

// Call By Address

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Description      :   Used to insert at first position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)              // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertLast
// Description      :   Used to insert at last position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int No)               // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertAtPos
// Description      :   Used to insert at specific given position of Linked List
// Parameters       :   Address of first pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int No, int pos)     // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteFirst
// Description      :   Used to delete at first position of Linked List
// Parameters       :   Address of First pointer, data of node & Position
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)                      // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteLast
// Description      :   Used to delete at Last position of Linked List
// Parameters       :   Address of First pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)                       // Function defination
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteAtPos
// Description      :   Used to delete at specific given position of Linked List
// Parameters       :   Address of first pointer & position
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int pos)             // Function defination
{}

int main()                                          // Function defination
{
    PNODE head = NULL;                              // Pointer to node

    Display(head);                                  // Function call
    Count(head);                                    // Function call

    InsertFirst(&head, 11);                         // Function call
    InsertLast(&head, 21);
    InsertAtPos(&head, 51,5);

    DeleteFirst(&head);                             // Function call
    DeleteLast(&head);
    DeleteAtPos(&head, 5);

    return 0;
}