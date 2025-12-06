#include <stdio.h>

#pragma pack(1)                         // Use pragma to remove padding

struct node                             // Structure Defination
{
    int data;                           // Variables
    struct node *next;
};

int main()                              // Main Method
{
    struct node obj;                    // Object Instantiation

    printf("%ld\n", sizeof(obj));       // Display Size of structure

    return 0;
}