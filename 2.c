/*Write a C program to compute the perimeter and area of a rectangle with a height of
7 inches and with a width of 5 inches */

#include <stdio.h>

int main()
{
    // Declare and initialize the height and width of the rectangle
    int height = 7; // Height of the rectangle in inches
    int width = 5;  // Width of the rectangle in inches

    // Calculate the perimeter of the rectangle
    int perimeter = 2 * (height + width);

    // Calculate the area of the rectangle
    int area = height * width;

    // Print the results
    printf("Height: %d inches\n", height);
    printf("Width: %d inches\n", width);
    printf("Perimeter of the rectangle: %d inches\n", perimeter);
    printf("Area of the rectangle: %d square inches\n", area);

    return 0;
}
