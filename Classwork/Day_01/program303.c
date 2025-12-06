#include <stdio.h>

struct node                             // Structure defination
{
    int data;
    struct node *next;
};

int main()                              // Main method
{
    struct node obj;                    // Structure Object 

    printf("%ld\n", sizeof(obj));       // Display size of object

    return 0;
}