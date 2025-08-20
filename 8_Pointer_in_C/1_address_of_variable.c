/*
    Program  : address of the variable
    Language : C
    Author   : S Sanjay Kumar
*/
#include <stdio.h>

// Program: Demonstrate variable addresses and pointer arithmetic

int main()
{
    int n = 10;
    char c = 'a';
    double d = 11.232423423;

    // Print base addresses using %p
    printf("Address of int     : %p\n", (void*)&n);
    printf("Address of char    : %p\n", (void*)&c);
    printf("Address of double  : %p\n", (void*)&d);

    // Pointer arithmetic: address + N * (moves by size of type)
    printf("Address of int + 1 : %p\n", (void*)(&n + 1));     // Moves by sizeof(int)
    printf("Address of char + 1: %p\n", (void*)(&c + 1));     // Moves by sizeof(char)
    printf("Address of double + 1: %p\n", (void*)(&d + 1));     // Moves by sizeof(double)

    return 0;
}