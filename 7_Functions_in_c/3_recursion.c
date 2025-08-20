/*
    Program  : Factorial of a Number Using Recursion
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

//To calculate the factorial of a given number using a recursive function.
int fact(int n)
{
    if (n <= 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    }
    return n * fact(n - 1);  // Recursive call
}

int main()
{
    int n;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);  // Read the input value from the user

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive function and display the result
        printf("Factorial of %d is: %d\n", n, fact(n));
    }

    return 0;  // Indicate successful program termination
}
