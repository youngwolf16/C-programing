/*
    Program  : Demonstration of do-while loop
    Language : C
    Author   : S Sanjay Kumar
*/

// Description: Shows that a do-while loop executes at least once
//              before checking the loop condition.

#include <stdio.h>  // Required for input/output functions

int main()
{
    // Declare variable to store user input
    int n;

    // Start of do-while loop
    // This loop will execute at least once, regardless of the condition
    do
    {
        // Prompt the user to enter a number
        printf("Enter a number:\n");

        // Read the number from user input
        scanf("%d", &n);

        // Print the entered number
        printf("%d\n", n);

    } while(n != 100);  // Continue looping until user enters 100

    return 0;  // Indicate successful program termination
}