/*
    Program  : Nested Loop Example in C
    Language : C
    Author   : S Sanjay Kumar
*/

// Description: Prints a 5x5 grid of asterisks using nested for-loops

#include <stdio.h>  // Required for input/output functions

int main()
{
    // Outer loop controls the number of rows (i = 0 to 4)
    for(int i = 0; i < 5; i++)
    {
        // Inner loop controls the number of columns (j = 0 to 4)
        for(int j = 0; j < 5; j++)
        {
            // Print one asterisk without newline
            printf("*");
        }

        // After printing one full row, move to the next line
        printf("\n");
    }

    return 0;  // Indicate successful program termination
}