/*
    Program  : Function returning pointer
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>
#include <stdlib.h>  // Required for malloc

/*
// Unsafe: Returning address of a local variable
int* unsafe_get() {
    int i = 100;         // Local variable
    return &i;           // Dangerous: i is destroyed after function ends
}
*/

// Safe: Using static variable
int* safe_static_get() {
    static int i = 200;  // Static variable persists after function ends
    return &i;           // Safe to return address
}

int main() {
    int *ptr;

/*
    // Unsafe usage: may print garbage or crash
    ptr = unsafe_get();
    printf("Unsafe get(): Value = %d (undefined behavior)\n", *ptr);
*/

    // Safe usage with static
    ptr = safe_static_get();
    printf("Safe static get(): Value = %d\n", *ptr);

    return 0;
}