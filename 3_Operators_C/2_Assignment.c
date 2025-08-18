/*

    Program  : Assignment Operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 100, b = 10;

// Performing arithmetic operations using compound assignment operators,
// where the result of each operation updates the value of 'a'.

int main()
{
    printf("a + b = %d\n", a += b);   // After addition: a = a + b = 110
    printf("a - b = %d\n", a -= b);   // After subtraction: a = a - b = 100
    printf("a * b = %d\n", a *= b);   // After multiplication: a = a * b = 1000
    printf("a / b = %d\n", a /= b);   // After division: a = a / b = 100
    printf("a %% b = %d\n", a %= b);  // After modulus: a = a % b = 0
}
