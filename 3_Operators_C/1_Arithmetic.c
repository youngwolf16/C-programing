/*

    Program  : Arithmetic Operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 100, b = 10;

int main()
{
    printf("a + b = %d\n", a + b);   // Addition: a + b = 110
    printf("a - b = %d\n", a - b);   // Subtraction: a - b = 90
    printf("a * b = %d\n", a * b);   // Multiplication: a * b = 1000
    printf("a / b = %d\n", a / b);   // Division: a / b = 10
    printf("a %% b = %d\n", a % b);  // Modulus (remainder): a % b = 0 — double percentage symbol escapes the format specifier
}
