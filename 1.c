/*Write a C program to print your name,
date of birth and mobile number */

#include <stdio.h>

int main()
{
    // Declare variables to store the information
    char name[] = "John Doe";
    char dob[] = "01/01/2000";      // Date of birth in DD/MM/YYYY format
    char mobile[] = "123-456-7890"; // Mobile number

    // Print the information
    printf("Name: %s\n", name);
    printf("Date of Birth: %s\n", dob);
    printf("Mobile Number: %s\n", mobile);

    return 0;
}
