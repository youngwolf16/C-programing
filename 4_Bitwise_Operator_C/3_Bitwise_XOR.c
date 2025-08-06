#include <stdio.h>

int a = 10, b = 7;
int output;

// Performing a bitwise XOR operation on two integers

int main()
{
    output = a ^ b;

    printf("XOR Operation of %d ^ %d is %d\n", a, b, output);

    /*
        Bitwise XOR (^) is often used in simple cryptographic techniques, especially in earlier systems.

        Example:
        Bit     = 1101 (13)
        Mask    = 1010 (10)
        Result  = 0111 (7)

        In this example, XOR can both encrypt and decrypt:

        Encrypt: 10 ^ 7 = 13
        Decrypt: 13 ^ 10 = 7

        The same key (in this case 10) can be used to retrieve the original value from the encrypted output.
        This symmetric nature of XOR makes it useful in lightweight data obfuscation.
    */

    return 0;
}