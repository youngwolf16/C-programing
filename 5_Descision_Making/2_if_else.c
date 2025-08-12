/*
    Program  : if else condition
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int num;

// Demonstrating use of if-else condition
int main()
{
    // Prompting user to enter one integer
    printf("Enter a number: ");
    scanf("%d", &num); 

    // Check if number is equal to zero
    if (num == 0)
    {
        printf("The number is zero\n");
    }
    else // Executes when if condition fails
    {
        printf("The number is non-zero\n");
    }

    return 0;
}