/*
    Program  : Structure Function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h> // Includes standard input/output functions like printf and scanf

// ----------- Structure Definition -----------

// Define a structure named 'name1' to hold student details
struct name1 {
    int age;   // Integer to store the student's age
    int roll;  // Integer to store the student's roll number
};

// ----------- Function Definition -----------

// This function takes a structure of type 'name1' as an argument
// It prints the values of 'age' and 'roll' from the passed structure
void fun(struct name1 obj)
{
    printf("age = %d\n", obj.age);   // Access and print age
    printf("roll = %d\n", obj.roll); // Access and print roll number
}

// ----------- Main Function -----------

int main() {
    // Declare and initialize a structure variable 's' of type 'name1'
    struct name1 s = {23, 398}; // age = 23, roll = 398

    // Call the function 'fun' and pass the structure 's' to it
    fun(s);

    return 0; // End of program
}