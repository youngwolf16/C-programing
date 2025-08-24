/*
    Program  : String passing in function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library

// Function to print a string passed as an argument
void printString(char str[]) {
    printf("The string is: %s\n", str);
}


// Function to display a string passed as a pointer
void showMessage(char *str) {
    printf("The string is: %s\n", str);
}


int main() {
    char myString[] = "Hello World!";  // Declare and initialize a string
    printString(myString);              // Pass the string to the function
    showMessage(myString);              // Pass the string to the function
    return 0;  // Return 0 to indicate successful execution
}
