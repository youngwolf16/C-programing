/*
    Program  : Escape Sequence
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int main()
{
    printf("Welcome to\n programming\n");          // \n → Inserts a new line
    printf("Welcome to\t programming\n");         // \t → Inserts a horizontal tab (usually 4 spaces)
    printf("Welcome to \'programming\'\n");      // \' → Displays single quotes
    printf("Welcome to \"programming\" \n");    // \" → Displays double quotes
    printf("Welcome to \\ programming");       // \\ → Displays a backslash
}
