/*
    Program  : ternary Operator
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int num;

// Demonstrating use of Ternary operator
int main()
{
    // Prompting user to enter one integer
    printf("Enter a number: ");
    scanf("%d", &num); 

    // Using ternary operator to check if number is negative or positive
    // This is also called a shortened if-else
    (num < 0) ? printf("Negative Number\n") : printf("Positive Number\n");

    return 0;
}