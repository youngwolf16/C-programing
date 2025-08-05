/*

    Program  : Relational Operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 100, b = 10;

// Demonstrating relational operators — these compare the values of 'a' and 'b'
// and return 1 if the condition is true, otherwise 0.

int main()
{
    printf("The return value of (%d == %d) is %d\n", a, b, a == b);    // Checks if a is equal to b
    printf("The return value of (%d != %d) is %d\n", a, b, a != b);    // Checks if a is not equal to b
    printf("The return value of (%d < %d) is %d\n", a, b, a < b);      // Checks if a is less than b
    printf("The return value of (%d <= %d) is %d\n", a, b, a <= b);    // Checks if a is less than or equal to b
    printf("The return value of (%d > %d) is %d\n", a, b, a > b);      // Checks if a is greater than b
    printf("The return value of (%d >= %d) is %d\n", a, b, a >= b);    // Checks if a is greater than or equal to b
}

