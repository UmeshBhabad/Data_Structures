#include <stdio.h>

#pragma pack(1)

struct node                         // Structre Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // Aliasing structure for readability

int main()                          // Main method
{
    // struct node obj;
    NODE obj;                       // Structure Instance

    printf("%ld\n", sizeof(obj));   // Display size of structure Instance

    return 0;
}