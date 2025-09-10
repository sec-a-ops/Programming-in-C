/*WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include <stdio.h>

int main() {
   
    float length, width, area, perimeter;
    
    
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n"); 
   	printf("-----------------------------\n");
    
    
     // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output results
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);


    return 0;
}
