/*
    Program  : print even integers until an odd number is entered
    Language : C
    Author   : S Sanjay Kumar
*/

//This C program continuously reads integers from the user and prints them only if they are even. The loop stops when the user enters an odd number.

#include <stdio.h>

int main()
{
    int num;

    // Infinite loop: will break when an odd number is entered
    while(1)
    {
        // Prompt user for input
        printf("Enter an integer: ");
        scanf("%d", &num);

        // Check if the number is even
        if(num % 2 == 0)
        {
            // Print the even number
            printf("You entered an even number: %d\n", num);
        }
        else
        {
            // Odd number entered — exit the loop
            printf("Odd number detected (%d). Stopping...\n", num);
            break;
        }
    }

    return 0;  // Program completed successfully
}
