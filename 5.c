/* Write a C program that accepts two integers from the user and calculates
the sum of the two integers
*/
#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum of the two integers
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
