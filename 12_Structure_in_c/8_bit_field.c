/*  
    Program  : Bit field  
    Language : C  
    Author   : S Sanjay Kumar  
*/

#include <stdio.h> // Standard I/O functions like printf and scanf

// ----------- Bit Field Structure for Status Flags -----------

// This structure uses only 1 bit for each flag (ON and OFF)
struct status {
    unsigned int ON  : 1;  // Uses 1 bit to store ON (0 or 1)
    unsigned int OFF : 1;  // Uses 1 bit to store OFF (0 or 1)
};

// ----------- Bit Field Structure for Date -----------

// This structure compresses a date into just 32 bits
struct date {
    unsigned int day   : 5;   // 5 bits can store values from 0 to 31
    unsigned int month : 4;   // 4 bits can store values from 0 to 15
    unsigned int year  : 23;  // 23 bits can store values up to ~8 million
};

// ----------- Main Function -----------

int main() {
    // Create a status variable and set ON/OFF flags
    struct status s;
    s.ON = 1;   // Turn ON
    s.OFF = 0;  // Turn OFF

    // Print the status flags
    printf("%d\n", s.ON);   // Output: 1
    printf("%d\n", s.OFF);  // Output: 0

    // Create a date variable and assign values
    struct date d;
    d.day = 2;       // Set day to 2
    d.month = 7;     // Set month to July
    d.year = 2023;   // Set year to 2023

    // Print the date in DD-MM-YYYY format
    printf("%d-%d-%d\n", d.day, d.month, d.year);  // Output: 2-7-2023

    return 0; // End of program
}