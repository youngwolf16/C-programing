/*
    Program  : Greatest of Two Numbers
    Language : C
    Author   : S Sanjay Kumar
   
*/

 //To demonstrate the use of a user-defined function that 
 //compares two integers entered by the user and displays the greater one.

#include <stdio.h>

// Function Definition:
// This function takes two integer parameters and returns the greater of the two.
int greatest(int n, int m)
{
    return n > m ? n : m;  // Ternary operator: returns 'n' if n > m, else returns 'm'
}

int main()
{
    int n, m;  // Declare two integer variables to store user input

    // Prompt the user to enter two integers
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &n, &m);  // Read the input values from the user

    // Call the 'greatest' function and display the result
    printf("Greatest among the two numbers is: %d\n", greatest(n, m));

    return 0;  // Indicate successful program termination
}
