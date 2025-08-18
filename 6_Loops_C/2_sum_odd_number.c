/*
    Program  : For Loop
    Language : C
    Author   : S Sanjay Kumar
*/

// Program to calculate the sum of odd numbers from 1 to a user-input value 'm'

#include <stdio.h>  // Includes the standard input-output library for using printf and scanf

int main()          // Main function: where program execution begins
{
    // Declare variables
    int m;          // Variable to store user input (upper limit)
    int o = 0;      // Variable to accumulate the sum of odd numbers

    scanf("%d", &m);  // Read an integer from the user and store it in 'm'

    // Loop from 1 to m (inclusive)
    for(int i = 1; i <= m; i++)
    {
        // Check if the current number 'i' is odd
        // i % 2 gives remainder when i is divided by 2
        // If remainder is not 0, then 'i' is odd
        if((i % 2) != 0)
        {
            // Add the odd number to the sum 'o'
            o += i;
        }
    }

    // After the loop ends, print the total sum of odd numbers
    printf("%d\n", o);

    return 0;       // Return 0 to indicate successful execution
}