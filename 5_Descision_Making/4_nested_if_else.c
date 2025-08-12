/*
    Program  : nested if else
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int num;

// Demonstrating use of nested if-else
int main()
{
    // Prompting user to enter an integer
    printf("Enter a number: ");
    scanf("%d", &num); 

    // Checking the sign of the entered number
    if (num > 0)
    {
        printf("The entered number is positive\n");
    }
    else if (num < 0)
    {
        printf("The entered number is negative\n");
    }
    else
    {
        printf("The entered number is zero\n");
    }

    return 0;
}