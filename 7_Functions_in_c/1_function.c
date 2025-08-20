/*
    Program  : Simple Function Program
    Language : C
    Author   : S Sanjay Kumar
    
*/

// demonstrate the use of a user-defined function that calculates 
// and displays the sum of two integers entered by the user.

#include <stdio.h>

// Function Definition:
// This function takes two integer parameters and prints their sum.
// It does not return any value, hence the return type is 'void'.
void sum(int n, int m)
{
    int result = n + m;  // Calculate the sum of n and m
    printf("Sum = %d\n", result);  // Display the result
}

int main()
{
    int n, m;  // Declare two integer variables to store user input

    // Prompt the user to enter two integers
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &n, &m);  // Read the input values from the user

    // Call the 'sum' function with the input values
    sum(n, m);

    return 0;  // Indicate successful program termination
}
