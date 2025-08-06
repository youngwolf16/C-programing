/*

    Program  : Bitwise OR Operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 10, b = 7;
int output;

// Performing a bitwise OR operation on two integers

int main()
{
    output = a | b;

    printf("OR Operation of %d | %d is %d\n", a, b, output);

    /*
        Bitwise OR is commonly used to set specific bits to 1.

        Example:
        Bit     = 0000
        Mask    | 1000
        Result  = 1000
    */

    return 0;
}
