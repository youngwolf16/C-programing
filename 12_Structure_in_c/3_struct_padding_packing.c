/*
    Program  : Structure Padding & Packing
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h> // Standard I/O library for printf

// ----------- Structure Padding Examples -----------

// Structure with a char followed by an int
struct name1 {
    char c;   // 1 byte
              // Padding: 3 bytes added here to align 'int' on a 4-byte boundary
    int i;    // 4 bytes
};            // Total size likely: 8 bytes

// Structure with char, int, and another char
struct name2 {
    char c1;  // 1 byte
              // Padding: 3 bytes
    int i1;   // 4 bytes
    char c2;  // 1 byte
              // Padding: 3 bytes (to align total size to multiple of 4)
};            // Total size likely: 12 bytes

// Structure with int followed by two chars
struct name3 {
    int i2;   // 4 bytes
    char c3;  // 1 byte
    char c4;  // 1 byte
              // Padding: 2 bytes (to align total size to multiple of 4)
};            // Total size likely: 8 bytes

// ----------- Structure Packing Example -----------

// Packed structure: disables padding using GCC-specific attribute
struct name4 {
    char c5;  // 1 byte
    int i4;   // 4 bytes
    char c6;  // 1 byte
} __attribute__((packed)); // Total size: 6 bytes (no padding added)

// ----------- Main Function -----------

int main() {
    // Padding increases performance by aligning data, but wastes memory
    printf("The size of name1 is %zu\n", sizeof(struct name1));
    printf("The size of name2 is %zu\n", sizeof(struct name2));
    printf("The size of name3 is %zu\n", sizeof(struct name3));

    // Packing saves memory but may reduce performance due to misalignment
    printf("The size of name4 is %zu\n", sizeof(struct name4));

    return 0; // End of program
}