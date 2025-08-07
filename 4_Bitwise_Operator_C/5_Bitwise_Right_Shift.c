/*
    Program  : Bitwise Right Shift Operator
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int a = 256;

// Performing bitwise right shift operations

int main()
{
    printf("The right shift of %d >> 1 is %d\n", a, a >> 1);
    printf("The right shift of %d >> 2 is %d\n", a, a >> 2);
    printf("The right shift of %d >> 3 is %d\n", a, a >> 3);

    /*
        Right Shift Operation:
            number >> n
            Equivalent to: number / (2^n)

        Example:
            128 >> 5
            = 128 / 2^5
            = 128 / 32
            = 4

        Each right shift divides the number by 2 for every shift position.
    */

    return 0;
}