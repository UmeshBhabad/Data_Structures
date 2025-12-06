#include <stdio.h>

#pragma pack(1)

struct node                         // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // Aliasing Structure for readability
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

int main()                          // Main method
{
    NODE obj;                       // Structure Instance Creation
    PNODE ptr1 = NULL;
    PPNODE ptr2 = NULL;

    ptr1 = &obj;                    // Assign Values
    ptr2 = &ptr1;

    return 0;
}