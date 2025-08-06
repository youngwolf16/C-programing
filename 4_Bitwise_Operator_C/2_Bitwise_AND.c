#include <stdio.h>

int a = 10, b = 7;
int output;

// Performing a bitwise AND operation on two integers

int main()
{
    output = a & b;

    printf("AND Operation of %d & %d is %d\n", a, b, output);

    /*
        Bitwise AND is commonly used to check whether a particular bit is set (1) or not (0).

        Example:
        Bit     = 0010
        Mask    & 0010
        Result  = 0010

        In the above example, we are checking whether the 2nd bit is set. 
        If the result reflects a non-zero value, the bit is indeed set.
    */

    return 0;
}