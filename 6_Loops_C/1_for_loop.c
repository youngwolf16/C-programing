/*
    Program  : For Loop
    Language : C
    Author   : S Sanjay Kumar
*/

// Program to print numbers in reverse order from 5 to 0

#include <stdio.h>  // Includes the standard input-output library for using printf

int main()          // Main function: where program execution begins
{
    // Start of the for loop
    // Step 1: Initialize i to 5
    // Step 2: Check if i >= 0 — if true, enter the loop body
    // Step 3: Execute the loop body — print the value of i
    // Step 4: Decrement i by 1 (i--)
    // Step 5: Repeat Steps 2–4 until i < 0

    for(int i = 5; i >= 0; i--)  // Loop control: starts at 5, runs while i >= 0, decreases i by 1 each time
    {
        // First iteration: i = 5 → condition true → print 5 → i becomes 4
        // Second iteration: i = 4 → condition true → print 4 → i becomes 3
        // Third iteration: i = 3 → condition true → print 3 → i becomes 2
        // Fourth iteration: i = 2 → condition true → print 2 → i becomes 1
        // Fifth iteration: i = 1 → condition true → print 1 → i becomes 0
        // Sixth iteration: i = 0 → condition true → print 0 → i becomes -1
        // Seventh check: i = -1 → condition false → loop ends

        printf("%d\n", i);  // Print the current value of i followed by a newline
    }

    return 0;  // Return 0 to indicate successful program completion
}