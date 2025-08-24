/*
    Program  : Passing 1D array to a function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for printf and scanf

// Function to display the contents of a 1D array
void display(int arr[])
{
    printf("Numbers inside the array are:\n");  // Message before printing array elements

    // Loop to print each element of the array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }
}

// Main function - entry point of the program
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};  // Declare and initialize a 1D array of 5 integers

    display(arr);  // Call the display function and pass the array as an argument

    return 0;  // Return 0 to indicate successful execution
}
