/*

    Program  : Size of operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int a = 5;                        // Declaring an integer variable
float b = 756.7;                 // Declaring a floating-point variable
double c = 86875688.5558;       // Declaring a double-precision floating-point variable
char d = 'T';                  // Declaring a character variable

// Displaying the memory size occupied by each data type

int main()
{
   printf("Size of Integer variable: %ld bytes\n", sizeof(a));         // Display size of int
   printf("Size of Float variable: %ld bytes\n", sizeof(b));           // Display size of float
   printf("Size of Double variable: %ld bytes\n", sizeof(c));          // Display size of double
   printf("Size of Character variable: %ld bytes\n", sizeof(d));       // Display size of char

   return 0;
}

