/*
    Program  : Pointers in C
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int main()
{
    int i = 100;
    int *ptr = &i;  // ptr stores the address of i

    // Print value pointed to by ptr
    printf("Value at ptr      : %d\n", *ptr);

    // Print value of i directly
    printf("Value of i        : %d\n", i);

    // Print address of i
    printf("Address of i      : %p\n", &i);

    // Print value of ptr (which is address of i)
    printf("Value of ptr      : %p\n", ptr);

    // Print address of ptr itself
    printf("Address of ptr    : %p\n", &ptr);

    return 0;
}

