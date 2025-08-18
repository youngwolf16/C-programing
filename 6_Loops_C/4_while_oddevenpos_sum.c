/*
    Program  : Sum of Odd and Even Position Digits
    Language : C
    Author   : S Sanjay Kumar
*/

// Description: This program calculates the sum of digits at odd and even positions.
// Note: Position count starts from the rightmost digit (units place = position 1)

#include <stdio.h>  // Standard I/O library for scanf and printf

int main()
{
    // Variable declarations
    int n;                  // Input number
    int rem;                // Stores the last digit of 'n'
    int pos = 1;            // Tracks digit position (starting from right)
    int oddPosSum = 0;      // Sum of digits at odd positions
    int evenPosSum = 0;     // Sum of digits at even positions

    // Read input number from user
    scanf("%d", &n);

    // Loop through each digit from right to left
    while(n > 0)
    {
        rem = n % 10;       // Extract the last digit

        // Check position type and add digit to corresponding sum
        if (pos % 2 == 0)
            evenPosSum += rem;  // If position is even, add to evenPosSum
        else
            oddPosSum += rem;   // If position is odd, add to oddPosSum

        n = n / 10;         // Remove the last digit
        pos++;              // Move to the next position
    }

    // Display the results
    printf("Odd Position Sum = %d\n", oddPosSum);
    printf("Even Position Sum = %d\n", evenPosSum);

    return 0;               // Program completed successfully
}