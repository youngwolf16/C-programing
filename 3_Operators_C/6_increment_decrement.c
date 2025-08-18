/*

    Program  :\Increment & Decrement operator
    Language : C
    Author   : S Sanjay Kumar

*/

#include <stdio.h>

int inc = 10, dec = 5;    // Initializing variables for increment and decrement operations

int a = 7, b;             // Initializing variables for demonstrating pre and post increment/decrement

int main()
{
    inc++;  // Incrementing the value of 'inc' by 1
    printf("Value after increment: %d\n", inc);          // Demonstrates increment operator

    dec--;  // Decrementing the value of 'dec' by 1
    printf("Value after decrement: %d\n", dec);          // Demonstrates decrement operator

    // Demonstrating post-increment and post-decrement
    b = a++;  // Post-increment: assigns 'a' to 'b', then increments 'a'
    printf("After post-increment: a = %d, b = %d\n", a, b);

    a = 7;    // Resetting 'a' to original value

    b = a--;  // Post-decrement: assigns 'a' to 'b', then decrements 'a'
    printf("After post-decrement: a = %d, b = %d\n", a, b);

    // Demonstrating pre-increment and pre-decrement

    a = 7;    // Resetting 'a' again

    b = ++a;  // Pre-increment: increments 'a' first, then assigns to 'b'
    printf("After pre-increment: a = %d, b = %d\n", a, b);

    a = 7;    // Resetting 'a' again
    b = --a;  // Pre-decrement: decrements 'a' first, then assigns to 'b'
    printf("After pre-decrement: a = %d, b = %d\n", a, b);

    return 0;
}

