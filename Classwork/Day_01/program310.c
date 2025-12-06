#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct node                                 // Structure defination
{
    int data;
    struct node *next;
}NODE , *PNODE, **PPNODE;   // Not Recommended      // Aliasing Structure for readability

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

int main()
{
    PNODE ptr = NULL;                               // Pointer to structure

    ptr = (PNODE)malloc(sizeof(NODE));              // Allocating memory

    // Use the node

    free(ptr);                                      // Deallocating the allocated memory


    return 0;
}