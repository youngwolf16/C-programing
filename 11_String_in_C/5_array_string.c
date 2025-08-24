/*
    Program  : Array of Strings
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library

int main() {
    // Declare and initialize an array of 5 strings, each with a maximum length of 19 characters + '\0'
    char subject[5][20] = {"Tamil", "English", "Math", "Science", "Social"};

    // Loop through the array and print each subject
    for (int i = 0; i < 5; i++) {
        printf("%s\n", subject[i]);
    }

    return 0;  // Return 0 to indicate successful execution
}
