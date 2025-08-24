/*
    Program  : String Input from User
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf and scanf

int main()
{
    char name[50];  // Declare a character array to store the user's name (up to 49 characters + '\0')

    printf("Enter your name: \n");
    scanf("%s", name);  // Read a single word (no spaces) into the array

    printf("Welcome %s!\n", name);  // Display the entered name

    return 0;  // Return 0 to indicate successful execution
}
