/*
    Program  : String Functions
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    // Declare strings
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "Hello World";
    char ch = 'o';

    // 1. String Length
    // strlen() returns the number of characters in the string (excluding the null terminator)
    printf("Length of str1 ('%s') = %lu\n", str1, strlen(str1));

    // 2. String Copy
    // strcpy() copies the content of one string into another
    strcpy(str3, str1);
    printf("After copying, str3 = '%s'\n", str3);

    // 3. String Concatenation
    // strcat() appends one string to the end of another
    strcat(str1, str2); // str1 becomes "HelloWorld"
    printf("After concatenation, str1 = '%s'\n", str1);

    // 4. First Occurrence of a Character
    // strchr() returns a pointer to the first occurrence of a character in a string
    char *char_pos = strchr(str1, ch);
    if (char_pos != NULL) {
        printf("First occurrence of '%c' in str1 is at position %ld\n", ch, char_pos - str1);
    } else {
        printf("Character '%c' not found in str1\n", ch);
    }

    // 5. First Occurrence of a Substring
    // strstr() returns a pointer to the first occurrence of a substring in a string
    char *substr_pos = strstr(str4, str2); // Looking for "World" in "Hello World"
    if (substr_pos != NULL) {
        printf("Substring '%s' found in str4 at position %ld\n", str2, substr_pos - str4);
    } else {
        printf("Substring '%s' not found in str4\n", str2);
    }

    // 6. String Comparison
    // strcmp() compares two strings lexicographically
    // Returns 0 if equal, <0 if first < second, >0 if first > second
    int cmp_result = strcmp(str1, str3);
    if (cmp_result == 0) {
        printf("str1 and str3 are equal\n");
    } else if (cmp_result < 0) {
        printf("str1 is less than str3\n");
    } else {
        printf("str1 is greater than str3\n");
    }

    return 0;
}