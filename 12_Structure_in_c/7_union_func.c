/*
    Program  : Union Function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h> // Standard I/O functions like printf and scanf

// ----------- Union Definition -----------

// Define a union named 'name1' with two members
union name1 {
    int i;     // Integer member
    float f;   // Float member
};

// ----------- Function Definition -----------

// Function that takes a union as an argument (passed by value)
void fun(union name1 obj)
{
    // Access and print the integer member
    // Note: Only one member is valid at a time in a union
    printf("age = %d\n", obj.i);
}

// ----------- Main Function -----------

int main() {
    union name1 d;  // Declare a union variable

    d.i = 100;      // Set the integer member

    fun(d);         // Pass the union to the function

    return 0;       // End of program
}