/* Write a C program that accepts two integers from the user and calculates
 the product of the two integers
*/
#include <stdio.h>

int main()
{
    int num1, num2, product;

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the product of the two integers
    product = num1 * num2;

    // Print the result
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
