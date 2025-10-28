// 3.6. WAP using ternary operator, the user should input the length and 
breadth of a rectangle, one has to find out which rectangle has the 
highest perimeter. The minimum number of rectangles should be three. 
#include<stdio.h> 
#include<conio.h> 
int main() { 
    int n, l, b, i, maxPerimeter = 0, rectNo = 0; 
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");  
    printf("-----------------------------\n"); 
    printf("Enter number of rectangles (minimum 3): "); 
    scanf("%d", &n); 
        if (n < 3) { 
        printf("You must enter at least 3 rectangles.\n"); 
        return 0; 
} 
   for (i = 1; i <= n; i++) { 
       printf("Enter length and breadth of rectangle %d: ", i); 
        scanf("%d %d", &l, &b); 
        int perimeter = 2 * (l + b); 
        if (perimeter > maxPerimeter) { 
            maxPerimeter = perimeter; 
            rectNo = i; 
        } 
        int oldMaxPerimeter = maxPerimeter; 
        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter; 
        rectNo = (perimeter > oldMaxPerimeter) ? i : rectNo; 
    } 
    printf("Rectangle %d has the highest perimeter = %d\n", rectNo, maxPerimeter); 
    getch();    
    return 0; 
} 
