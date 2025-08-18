/*
    Program  : if condition
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int num1, num2;

// Demonstrating use of if condition to safely perform division

int main()
{
    // Prompting user to enter two integers
    printf("Enter two integers (num1 and num2): ");
    scanf("%d %d", &num1, &num2);

    // Check if divisor is not zero
    if (num2 != 0)
    {
        printf("num1 / num2 = %d\n", num1 / num2);
    }
    
    return 0;
}