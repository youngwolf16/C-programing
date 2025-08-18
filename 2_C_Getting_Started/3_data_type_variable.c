/*
    Program  : Data Types & Variables
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

// Variable declarations with appropriate data types
int age = 25;               // Integer data type
float weight = 67.35;       // Float data type
char letter = '*';          // Character data type //can give 8 bit int i/p 65 -> A
double digit = 1111.3335;   // Double data type
int try;

int main()
{
   
    printf("%d\n", age);               // Prints an integer value
    printf("%f\n", weight);           // Prints a float value
    printf("%c\n", letter);          // Prints a character
    printf("%lf\n", digit);         // Prints a double value
    printf("%d\t%f\n", age, weight); // Prints multiple variables: integer and float, separated by a tab
}


// %d  → Format specifier for integers
// %f  → Format specifier for floating-point numbers (float)
// %c  → Format specifier for single characters
// %lf → Format specifier for double-precision floating-point numbers (double)
