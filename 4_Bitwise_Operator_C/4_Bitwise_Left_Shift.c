/*

    Program  : Bitwise Leftshift Operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 3;

// Performing bitwise left shift operations

int main()
{
    printf("The left shift of %d << 1 is %d\n", a, a << 1);
    printf("The left shift of %d << 2 is %d\n", a, a << 2);
    printf("The left shift of %d << 3 is %d\n", a, a << 3);

    /*
        Left Shift Operation:
            number << n
            Equivalent to: number * (2^n)

        Example:
            12 << 3
            = 12 * 2^3
            = 12 * 8
            = 96

        Each left shift multiplies the number by 2 for every shift position.
    */

    return 0;
}