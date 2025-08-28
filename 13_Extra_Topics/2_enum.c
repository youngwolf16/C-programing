/*  
    Program  : Enumeration
    Language : C  
    Author   : S Sanjay Kumar  
*/

#include <stdio.h>  // Include standard input/output library

int main() {

   // Define an enumeration named 'status' with two values: OFF and ON
   // By default, OFF = 0 and ON = 1
   enum status {OFF, ON};

   // Print the values of OFF and ON
   printf("OFF = %d\nON = %d\n", OFF, ON);

   // Declare a variable 'var' of type enum status
   enum status var;

   // Assign the value ON to 'var'
   var = ON;

   // Print the value of 'var' (which is ON = 1)
   printf("ON = %d\n", var);

   // Define another enumeration with custom values
   // sunday = 1, monday = 2, ..., thursday = 11, friday = 12, saturday = 13
   enum status2 {sunday = 1, monday, tuesday, wednesday, thursday = 11, friday, saturday};

   // Calculate the difference between saturday and sunday (13 - 1 = 12)
   int diff = saturday - sunday;

   // Print the difference
   printf("%d\n", diff);

   return 0;  // End of program
}