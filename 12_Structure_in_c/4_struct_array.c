/*
    Program  : Structure Array
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h> // Includes standard input/output functions like printf and scanf

// ----------- Structure Definition -----------

// Define a structure named 'name1' to hold student details
struct name1 {
    char name[4];   // Array of 4 characters to store the student's name (short names only!)
    int age;        // Integer to store the student's age
    int roll;       // Integer to store the student's roll number
};

// ----------- Main Function -----------

int main() {
    // Declare an array of 3 structures to hold data for 3 students
    struct name1 arr[3];

    printf("Enter Student Details:\n");

    // Loop to input details for each student
    for(int i = 0; i < 3; i++) {
        // Read name, age, and roll number from user
        // Note: %s reads a string, but name[4] limits input to 3 characters + null terminator
        scanf("%s %d %d", arr[i].name, &arr[i].age, &arr[i].roll);
    }

    printf("Student Details are:\n");

    // Loop to display the entered student details
    for(int i = 0; i < 3; i++) {
        // Print name, age, and roll number separated by tabs
        printf("%s\t%d\t%d\n", arr[i].name, arr[i].age, arr[i].roll);
    }

    return 0; // End of program
}