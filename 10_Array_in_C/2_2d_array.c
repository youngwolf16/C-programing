/*
    Program  : 2D Array Declaration & Initialization
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf and scanf

int main()
{
    // Direct initialization of a 3x3 2D array in a single line
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Row-wise initialization of a 3x3 2D array
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Declaration of a 3x3 2D array to be filled using user input
    int arr2[3][3];

    // Prompting the user to enter 9 digits to fill the array
    printf("Enter 9 Digits: ");

    // Nested loop to accept input for each element of the 2D array
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            scanf("%d", &arr2[row][col]);  // Reading input and storing in arr2
        }
    }

    printf("\n");  // Print a newline for better formatting

    // Nested loop to display each element of the array with its index
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("arr[%d][%d] = %d\n", row, col, arr2[row][col]);
        }
    }

    return 0;  // Return 0 to indicate successful execution
}
