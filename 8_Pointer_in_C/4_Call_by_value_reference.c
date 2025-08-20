/*
    Program  : Demonstrate call by reference vs value
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp;

    temp = *a;   // Store value at address a
    *a = *b;     // Assign value at address b to address a
    *b = temp;   // Assign stored value to address b

}

void swap1(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;

    // Read two integers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Display values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call swap function with addresses of x and y
    swap(&x, &y);

    // Display values after swapping
    printf("After swapping:  x = %d, y = %d\n", x, y);

    x = 5;
    y = 10;

    printf("\nTrying swap1 (call by value)...\n");
    swap1(x, y);  // call by value will not alter the actual variable

    printf("After swap1:     x = %d, y = %d\n", x, y);


    return 0;
}