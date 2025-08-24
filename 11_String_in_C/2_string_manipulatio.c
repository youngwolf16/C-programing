/*
    Program  : String Manipulation
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf

int main()
{
    // String initialization with size specified (must include space for '\0' null terminator)
    char name[7] = "Sanjay";  // 'S', 'a', 'n', 'j', 'a', 'y', '\0'

    // Modify the first character of the string
    name[0] = 'D';  // Changes "Sanjay" to "Danjay"
    printf("%s\n", name);  // Output: Danjay

    // Modify the third character (index 2) of the string
    name[2] = 'K';  // Changes "Danjay" to "DaKjay"
    printf("%s\n", name);  // Output: DaKjay

    return 0;  // Return 0 to indicate successful execution
}
