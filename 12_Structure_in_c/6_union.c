/*
    Program  : Union
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

// ---------- Union Definition ----------
union Data {
    int i;
    float f;
    char c;
};

// ---------- Tagged Union ----------
struct TaggedValue {
    int type;       // 1 = int, 2 = float, 3 = char
    union Data val; // Union to hold one of the types
};

int main() {
    // ----------- Example 1: Overriding Values -----------
    printf("Example 1: Overriding Union Values\n");

    union Data d;

    d.i = 100;
    printf("d.i = %d\n", d.i);

    d.f = 3.14; // Overwrites d.i
    printf("d.f = %.2f\n", d.f);
    printf("d.i (after float) = %d\n", d.i); // Corrupted

    d.c = 'A'; // Overwrites d.f
    printf("d.c = %c\n", d.c);
    printf("d.f (after char) = %.2f\n", d.f); // Corrupted

    // ----------- Example 2: Proper Tagged Union Use -----------
    printf("\nExample 2: Proper Tagged Union Usage\n");

    struct TaggedValue v;

    // Store an integer safely
    v.type = 1;
    v.val.i = 42;

    // Use tag to decide what to print
    if (v.type == 1)
        printf("Integer: %d\n", v.val.i);
    else if (v.type == 2)
        printf("Float: %.2f\n", v.val.f);
    else if (v.type == 3)
        printf("Char: %c\n", v.val.c);

    return 0;
}