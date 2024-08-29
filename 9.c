/*Write a C program to convert a given integer (in seconds)
to hours, minutes and seconds
*/

#include <stdio.h>

int main()
{
    int total_seconds, hours, minutes, seconds;

    // Prompt the user to enter the total number of seconds
    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    // Calculate the number of hours
    hours = total_seconds / 3600;

    // Calculate the remaining seconds after converting to hours
    int remaining_seconds = total_seconds % 3600;

    // Calculate the number of minutes from the remaining seconds
    minutes = remaining_seconds / 60;

    // Calculate the remaining seconds after converting to minutes
    seconds = remaining_seconds % 60;

    // Print the results
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds.\n", total_seconds, hours, minutes, seconds);

    return 0;
}
