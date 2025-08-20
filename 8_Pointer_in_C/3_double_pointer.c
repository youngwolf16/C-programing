/*
    Program  :  Double Pointers in C
    Language : C
    Author   : S Sanjay Kumar
*/

/*

┌────────────┐
│   i = 100  │
│  Addr: 0xA │
└────┬───────┘
     │
     ▼
┌────────────┐
│ ptr = 0xA  │
│  Addr: 0xB │
└────┬───────┘
     │
     ▼
┌────────────┐
│dptr = 0xB  │
│ Addr: 0xC  │
└────────────┘


*/

#include <stdio.h>

int main()
{
    int i = 100;
    int *ptr = &i;      // ptr points to i
    int **dptr = &ptr;  // dptr points to ptr

    // Values
    printf("Value of i           : %d\n", i);
    printf("Value at ptr         : %d\n", *ptr);
    printf("Value at dptr        : %d\n", **dptr);

    // Addresses
    printf("Address of i         : %p\n", (void*)&i);
    printf("Value of ptr (addr i): %p\n", (void*)ptr);
    printf("Address of ptr       : %p\n", (void*)&ptr);
    printf("Value of dptr (addr ptr): %p\n", (void*)dptr);
    printf("Address of dptr      : %p\n", (void*)&dptr);

    return 0;
}