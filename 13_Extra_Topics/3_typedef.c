/*  
    Program  : typedef
    Language : C  
    Author   : S Sanjay Kumar  
*/

#include <stdio.h>  // Standard input/output library

// Correct macro definition 
#define iptr1 int*

// Create a new type name 'iptr' for 'int *'
typedef int *iptr;

// Create a new type name 'point_t' for 'struct point'
typedef struct point point_t;

// Define the structure 'point'
struct point {
    int x;
    int y;
};

// Create a variable 'obj' of type point_t and initialize it
point_t obj = {10, 20};

int main() {

    // Create a new type name 'name' for 'int'
    typedef int name;

    name i = 10;  // Equivalent to: int i = 10

    printf("%d\n", i);  // Prints: 10

    // Both 'p' and 'q' are int pointers
    iptr p, q;

    // Both 'a' and 'b' are int pointers using macro
    iptr1 a, b;

    return 0;  // End of program
}