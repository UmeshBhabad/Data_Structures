#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node                         // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // Aliasing structure for readability
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

void Display(PNODE first)           // Function to display nodes of Linked List
{}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Count
// Description      :   Used to count elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE first)              // Function to count nodes of Linked List
{
    return 0;
}

int main()                          // Main method
{
    PNODE head = NULL;              // Pointer to node

    Display(head);                  // Function call

    Count(head);                    // Function call

    return 0;
}