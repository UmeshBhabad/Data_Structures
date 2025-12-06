#include <stdio.h>

#pragma pack(1)

struct node                         // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // Aliasing structure for readability

int main()                          // Main method
{
    // struct node obj;
    NODE obj;                       // Structure Instance

    obj.data = 11;                  // Assign Values(using . operator)
    obj.next = NULL;

    printf("%ld\n", sizeof(obj));   // Display Sizae of Structure

    return 0;
}