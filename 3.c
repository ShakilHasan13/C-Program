/* Write a C program to compute the perimeter
 and area of a circle with a given radius
*/
#include <stdio.h>
#define PI 3.14159 // Define the value of PI

int main()
{
    // Declare a variable to store the radius of the circle
    float radius;

    // Ask the user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter (circumference) of the circle
    float perimeter = 2 * PI * radius;

    // Calculate the area of the circle
    float area = PI * radius * radius;

    // Print the results
    printf("Radius: %.2f units\n", radius);
    printf("Perimeter (Circumference) of the circle: %.2f units\n", perimeter);
    printf("Area of the circle: %.2f square units\n", area);

    return 0;
}
