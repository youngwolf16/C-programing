/*
    Program  : Print N x N hollow box
    Language : C
    Author   : S Sanjay Kumar
*/

// Description: Gets a positive integer N from the user and prints an N x N empty box

#include <stdio.h>

int main()
{
    int N, i, j;

    // Prompt user for a positive integer
    printf("Enter a positive integer (N): ");
    scanf("%d", &N);

    // Validate input
    if(N <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;  // Exit with error code
    }

    // Loop through each row
    for(i = 0; i < N; i++)
    {
        // Loop through each column
        for(j = 0; j < N; j++)
        {
            // Print '*' at borders (first/last row or first/last column)
            if(i == 0 || i == N - 1 || j == 0 || j == N - 1)
                printf("*");
            else
                printf(" ");  // Print space for the hollow center
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;  // Program completed successfully
}