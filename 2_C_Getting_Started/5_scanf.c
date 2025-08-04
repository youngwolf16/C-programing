/*
    Program  : Scanf function
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int age;
float weight;

int main()
{
    printf("Enter Age:\n");
    scanf("%d", &age);     // The scanf function is used to collect input from the user.
                           // We need to pass the address of the variable as a parameter.
                           
    printf("Enter Weight:\n");
    scanf("%f", &weight);  // Collects float input from the user.

    printf("Age = %d\nWeight = %f", age, weight);  // Displays the entered values.
}

