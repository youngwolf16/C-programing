/*
    Program  : Read 5 characters and print only the consonants
    Language : C
    Author   : S Sanjay Kumar
*/

//This C program reads 5 characters from the user and prints only the consonants, skipping any vowels using the continue statement.

#include <stdio.h>
#include <ctype.h>  // For tolower()

int main()
{
    char ch;
    int i;

    printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf(" %c", &ch);  // Space before %c to skip whitespace

        // Convert character to lowercase for uniform comparison
        char lower = tolower(ch);

        // Skip vowels using continue
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            continue;
        }

        // Print consonant
        printf("%c\n", ch);
    }

    return 0;
}