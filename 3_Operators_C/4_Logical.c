/*

    Program  : Logical operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 5, b = 10, ret;

// Performing logical operations: OR, AND, and NOT

int main()
{
    ret = ((a <= b) || (a != b));        // Evaluates logical OR between 'a <= b' and 'a != b'
    printf("Return Value for the above expression is %d\n", ret);

    ret = ((a <= b) && (a == b));        // Evaluates logical AND between 'a <= b' and 'a == b'
    printf("Return Value for the above expression is %d\n", ret);

    ret = !((a <= b) && (a == b));       // Applies logical NOT to the result of 'a <= b && a == b'
    printf("Return Value for the above expression is %d\n", ret);

    return 0;
}
