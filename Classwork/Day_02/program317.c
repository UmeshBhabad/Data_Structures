#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node                                                 // Structure defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                                   // Aliasing Structure
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Description      :   Used to insert at first position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)                      // Function defination
{
    PNODE newn = NULL;                                      // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                     // Allocate memory
    
    newn -> data = No;                                      // Assign value to data
    newn -> next = NULL;                                    // Assign next to null

    if((*first) == NULL)  // Linkedlist is Empty
    {
        (*first) = newn;                                    // provide new node address to head
    }
    else        // Linkedlist contains atleast one node
    {
        newn -> next = *first;                              // assign previous node address to next of new node

        (*first) = newn;                                    // provide new node address to head
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertLast
// Description      :   Used to insert at last position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int No)                       // Function defination
{
    PNODE newn = NULL;                                      // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                     // Allocate memory
    
    newn -> data = No;                                      // Initialize data
    newn -> next = NULL;                                    // Initialize next

    if((*first) == NULL)  // LL is Empty
    {
        (*first) = newn;                                    // provide new node address to head
    }
    else        // LL contains atleast one node
    {
        
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Display
// Description      :   Used to display elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)                                   // Function defination
{
    // Business Logic
    while(first != NULL)                                    // till first is not null
    {
        printf("%d\t", first->data);                        // Display data
        first = first -> next;                              // Update first
    }
    printf("\n");
}

int main()                                                  // Main method
{
    PNODE head = NULL;                                      // pointer to Linkedlist

    InsertFirst(&head, 75);                                 // Function call
    InsertFirst(&head, 51);                                 // Function call
    InsertFirst(&head, 21);                                 // Function call
    InsertFirst(&head, 11);                                 // Function call

    Display(head);                                          // Function call

    return 0;
}