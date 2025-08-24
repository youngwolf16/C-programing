/*
    Program  : Array Declaration & Initialization
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library

int main()
{
    int arr[5];  // Declare an integer array of size 5

    printf("Enter 5 numbers : ");  // Prompt user to input 5 numbers

    // Loop to take input from user and store in array
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);  // Read integer input and store in arr[i]
    }

    printf("\nNumbers inside the array are : ");  // Display message before printing array

    // Loop to print each element of the array
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }

    return 0;  // Return 0 to indicate successful execution
}
