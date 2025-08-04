/*
    Program  : Constant
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

// Variable declarations with appropriate data types
const int age = 25;               // Integer data type
const float weight = 67.35;       // Float data type
const char letter = '*';          // Character data type
const double digit = 1111.3335;   // Double data type

// The above constants cannot be changed. 
// If we try to assign a new value, it will throw an error: "assignment of read-only variable".

int main()
{
    printf("%d\n", age);       // Prints an integer value
    printf("%f\n", weight);    // Prints a float value
    printf("%c\n", letter);    // Prints a character
    printf("%lf", digit);      // Prints a double value
}
