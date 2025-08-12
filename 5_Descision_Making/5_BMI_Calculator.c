/*
    Program  : BMI Calculator
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>

int main()
{
    float height_cm, weight, height_m, BMI;

    // Prompt user for input
    printf("Enter height in cm and weight in kg: ");
    scanf("%f %f", &height_cm, &weight);

    // Convert height to meters
    height_m = height_cm / 100.0;

    // Calculate BMI
    BMI = weight / (height_m * height_m);

    // Display BMI and category
    printf("BMI = %.2f\n", BMI);

    if (BMI < 19)
    {
        printf("Lean\n");
    }
    else if (BMI >= 19 && BMI <= 25)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Overweight\n");
    }

    return 0;
}