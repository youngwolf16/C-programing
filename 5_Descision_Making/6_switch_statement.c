/*
    Program  : Switch statement
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library

// Declare global variables
int num1, num2, choice;

int main()
{
    // Prompt user to enter two integers
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);  // Read the two numbers from user input

    // Display operation choices
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");

    // Read user's choice
    scanf("%d", &choice);

    // Perform operation based on user's choice
    switch (choice)
    {
        case 1:  // If choice is 1, perform addition
            printf("Result = %d\n", num1 + num2);
            break;

        case 2:  // If choice is 2, perform subtraction
            printf("Result = %d\n", num1 - num2);
            break;

        case 3:  // If choice is 3, perform multiplication
            printf("Result = %d\n", num1 * num2);
            break;

        case 4:  // If choice is 4, perform division
            // Check for division by zero
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:  // If choice is not 1–4, show error
            printf("Invalid choice.\n");
    }

    return 0;  // End of program
}