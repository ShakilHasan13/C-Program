/* Write a C program to convert specified days
into years, weeks and days.
Test Data:
Number of days: 1329
Expected Output:
Years: 3
Weeks: 33
days: 3
*/

#include <stdio.h>

int main()
{
    int total_days = 1329; // Given number of days
    int years, weeks, days;

    // Calculate the number of years
    years = total_days / 365;

    // Calculate the remaining days after converting to years
    int remaining_days = total_days % 365;

    // Calculate the number of weeks from the remaining days
    weeks = remaining_days / 7;

    // Calculate the remaining days after converting to weeks
    days = remaining_days % 7;

    // Print the results
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
