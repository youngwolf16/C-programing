/*

    Program  : operator precedence
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    a = 20 + 10 * 10 / 2;   // Evaluating expression with operator precedence
    printf("The value of a = %d\n", a);  // Expected result is 70 due to precedence rules

    /*
        Operator Precedence and Associativity:
        --------------------------------------
        1. ()           - Highest precedence, evaluated Left to Right
        2. * / %        - Next level, evaluated Left to Right
        3. + -          - Lowest among these, evaluated Left to Right
    */

    b = 5 + 4 * 3;  // Multiplication has higher precedence than addition
    printf("The value of b = %d\n", b);  // Result is 17

    // Prioritizing addition using parentheses
    c = (5 + 4) * 3;  // Parentheses change the order of evaluation
    printf("The value of c = %d\n", c);  // Result is 27

    // Operators with same precedence: * and /
    d = 10 * 3 / 2;  // Evaluated left to right: (10 * 3) / 2
    printf("The value of d = %d\n", d);  // Result is 15

    // Complex expression to practice precedence and associativity
    e = 10 / 10 + 10 * 10 - 10;  // Evaluated as: (10 / 10) + (10 * 10) - 10
    printf("The value of e = %d\n", e);  // Result is 91

    return 0;
}


