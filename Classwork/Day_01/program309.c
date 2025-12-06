#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node                             // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;               // Aliasing structure for Readbility
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

int main()                              // Main method
{
    PNODE ptr = NULL;                   // pointer to structure

    ptr = (PNODE)malloc(sizeof(NODE));  // Allocating memory in heap

    // Use the node

    free(ptr);                          // Deallocate the allocated Memory


    return 0;
}