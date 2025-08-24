/*
    Program  : Structure in c
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h>  // Include standard input/output library for using printf

int main()
{
    
    struct car
    {
        char name[5];
        float price;
    };

    struct car car1 = {"xyz",987432.50};

    car1.price = 1009.80;

    printf("Name of car1 = %s\n",car1.name);
    printf("Price of car1 = %f\n", car1.price);

    return 0;  // Return 0 to indicate successful execution
}
