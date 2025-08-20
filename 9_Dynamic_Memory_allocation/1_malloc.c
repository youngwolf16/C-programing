/*
    Program  : DMA Malloc program
    Language : C
    Author   : S Sanjay Kumar
    
*/

#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free

int main() {
    int *arr;       // Pointer to hold the base address of the allocated memory
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers using malloc
    // malloc returns a void pointer, so we cast it to int*
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with an error code
    }

    // Input values into the allocated memory
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Store input directly into allocated memory
    }

    // Display the values stored in memory
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory to avoid memory leaks
    free(arr);

    return 0;
}
