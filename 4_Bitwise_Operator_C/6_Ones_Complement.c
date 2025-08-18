/*
    Program  : 1's Complement
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int a = 10;

// Performing bitwise 1's complement and double complement

int main()
{
    printf("The 1's complement of %d is %d\n", a, ~a);
    printf("The double 1's complement of %d is %d\n", a, ~(~a)); // ~(~n) = n

    /*
        1's Complement Operation:
            ~n
            Flips all bits of the number.

        In signed integer representation (two's complement),
        ~n is equivalent to -(n + 1)

        Example:
            ~160
            = -(160 + 1)
            = -161

            ~(-160)
            = -(-160 + 1)
            = 159

        Double Complement:
            ~(~n) returns the original value n.
            This is because flipping the bits twice restores the original pattern.

        Bitwise complement is commonly used in low-level programming,
        especially for masking, toggling bits, and implementing certain arithmetic tricks.
    */

    return 0;
}