/* Write a C program that accepts an employee's id, total worked hours in a month and the amount he received per hour. Print the id and salary (with two decimal places)
of the employee for a particular month.
*/
#include <stdio.h>

int main()
{
    int emp_id;
    float hours_worked, pay_per_hour, salary;

    // Prompt the user to enter the employee's ID
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    // Prompt the user to enter the total worked hours in a month
    printf("Enter total worked hours in a month: ");
    scanf("%f", &hours_worked);

    // Prompt the user to enter the amount received per hour
    printf("Enter amount received per hour: ");
    scanf("%f", &pay_per_hour);

    // Calculate the employee's salary
    salary = hours_worked * pay_per_hour;

    // Print the employee's ID and calculated salary with two decimal places
    printf("Employee ID: %d\n", emp_id);
    printf("Salary: $%.2f\n", salary);

    return 0;
}
