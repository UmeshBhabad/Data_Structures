#include <stdio.h>

#pragma pack(1)

struct node                         // Structure Defiantion
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // Aliasing Structure for readability

int main()                          // Main Method
{
    struct node *head = NULL;       // pointer to structure

    NODE obj;                       // Structure Instance

    head = &obj;                    // Storing structure instance address in head

    head -> data = 11;              // Assign Values (using -> operator)
    head -> next = NULL;


    return 0;
}