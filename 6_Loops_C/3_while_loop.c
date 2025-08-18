/*
    Program  : While Loop
    Language : C
    Author   : S Sanjay Kumar
*/

// Program to count how many times a number can be divided by 2 until it becomes 1

#include <stdio.h>  // Includes the standard input-output library for using printf and scanf

int main()          // Main function: where program execution begins
{
    // Declare variables
    int num, count = 0;  // 'num' stores user input, 'count' tracks number of divisions

    scanf("%d", &num);   // Read an integer from the user and store it in 'num'

    // Loop continues as long as 'num' is greater than 1
    while(num > 1)
    {
        count++;         // Increment count for each division
        num = num >> 1;  // Bitwise right shift: divides 'num' by 2
                         // Equivalent to: num = num / 2 (but faster for integers)
    }

    // After loop ends, print the number of divisions performed
    printf("%d\n", count);

    return 0;            // Return 0 to indicate successful execution
}
