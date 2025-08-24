/*
    Program  : String Initializing
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf

int main()
{
    // String initialization with size specified (must include space for '\0' null terminator)
    char name[7] = "Sanjay";  // 'S', 'a', 'n', 'j', 'a', 'y', '\0'

    // String initialization without specifying size (compiler automatically adds '\0')
    char name1[] = "Sanjay";

    // Character-by-character initialization with explicit null terminator
    char name2[7] = {'S', 'a', 'n', 'j', 'a', 'y', '\0'};

    // Same as above, but without specifying size (compiler counts characters including '\0')
    char name3[] = {'S', 'a', 'n', 'j', 'a', 'y', '\0'};

    // Access and print the third character (index 2) of the string
    printf("%c\n", name[2]);  // Output: 'n'

    return 0;  // Return 0 to indicate successful execution
}
