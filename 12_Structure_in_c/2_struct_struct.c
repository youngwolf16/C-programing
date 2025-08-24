/*
    Program  : Structure within structure
    Language : C
    Author   : S Sanjay Kumar
*/

#include <stdio.h> // Include standard input/output library

// Define the inner structure first
struct Address {
    char city[20];     // String to store city name (up to 19 characters + null terminator)
    int pincode;       // Integer to store the area's pincode
};

// Define the outer structure that contains the inner structure
struct Student {
    char name[20];         // String to store student name
    int age;               // Integer to store student age
    struct Address addr;   // Nested structure: Address is part of Student
};

int main() {
    struct Student s1; // Declare a variable s1 of type Student

    // Take input from the user
    printf("Enter name: ");
    scanf("%s", s1.name); // Read name into s1.name

    printf("Enter age: ");
    scanf("%d", &s1.age); // Read age into s1.age (use & to pass address)

    printf("Enter city: ");
    scanf("%s", s1.addr.city); // Read city into nested structure s1.addr.city

    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode); // Read pincode into nested structure s1.addr.pincode

    // Display the collected information
    printf("\n--- Student Info ---\n");
    printf("Name: %s\n", s1.name);           // Print student name
    printf("Age: %d\n", s1.age);             // Print student age
    printf("City: %s\n", s1.addr.city);      // Print city from nested structure
    printf("Pincode: %d\n", s1.addr.pincode);// Print pincode from nested structure

    return 0; // End of program
}
