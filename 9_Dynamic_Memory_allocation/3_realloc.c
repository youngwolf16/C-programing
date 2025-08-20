/*
    Program  : DMA Realloc program
    Language : C
    Author   : S Sanjay Kumar
    
*/


#include <stdio.h>
#include <stdlib.h>  // Required for malloc, realloc, and free

int main() {
    int *arr;       // Pointer to hold the base address of the allocated memory
    int initialSize, newSize, i;

    // Ask the user for the initial number of elements
    printf("Enter initial number of elements: ");
    scanf("%d", &initialSize);

    // Allocate memory for 'initialSize' integers
    arr = (int *)malloc(initialSize * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    // Input values into the initially allocated memory
    printf("Enter %d integers:\n", initialSize);
    for (i = 0; i < initialSize; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask the user for the new size (larger than initial)
    printf("Enter new size (greater than %d): ", initialSize);
    scanf("%d", &newSize);

    // Resize the memory block using realloc
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // Check if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input additional values into the newly allocated space
    printf("Enter %d more integers:\n", newSize - initialSize);
    for (i = initialSize; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    // Display all values stored in memory
    printf("All values:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
