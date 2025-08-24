/*
    Program  : Passing 2D array to a function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf and scanf

// Function to display the contents of a 3x3 2D array
// Note: You must specify the number of columns in the parameter
void display(int arr1[3][3]) {
    // Loop through each row
    for (int row = 0; row < 3; row++) {
        // Loop through each column
        for (int col = 0; col < 3; col++) {
            // Print the element with its index
            printf("arr[%d][%d] = %d\n", row, col, arr1[row][col]);
        }
    }
}

int main()
{
    // Declare and initialize a 3x3 2D array
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the display function and pass the 2D array
    display(arr1);

    return 0;  // Return 0 to indicate successful execution
}
