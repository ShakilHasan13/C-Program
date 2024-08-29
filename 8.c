/* Write a C Program that accepts three integers
and find the maximum of the three
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    // Prompt the user to enter three integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);

    // Determine the maximum of the three integers
    max = num1; // Assume num1 is the largest for now

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }

    // Print the maximum value
    printf("The maximum of the three integers is: %d\n", max);

    return 0;
}
