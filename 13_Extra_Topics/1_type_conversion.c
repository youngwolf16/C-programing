/*  
    Program  : Type Conversion
    Language : C  
    Author   : S Sanjay Kumar  
*/

#include <stdio.h>  // Include standard input/output library

int main() {

    int i = 3;        // Declare an integer variable and assign value 3
    float f = 3.14;   // Declare a float variable and assign value 3.14
    char c = 'a';     // Declare a character variable and assign 'a' (ASCII value is 97)

    // Add int, float, and char together
    // 'c' is automatically converted to its ASCII value (97)
    // 'f' is promoted to float, and 'i' and 'c' are also converted to float
    // The result is a float, but it's stored in an int variable, so decimal part is dropped
    int ans = i + f + c;

    // Print the result of implicit type conversion
    // %d is used for int, so it prints the integer value of 'ans'
    printf("Implicit type conversion done by the compiler %d\n", ans);

    // Explicit type conversion: 3 is converted to float before division
    // So 20 / 3.0 = 6.666...
    float e = 20 / (float)3;

    // Print the result of explicit type conversion
    // It should be %f to correctly print the float value
    printf("Explicit type conversion done by the coder %f\n", e); 

    return 0;  // End of program
}