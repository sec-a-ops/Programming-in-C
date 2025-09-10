/*4. ⁠Write a program to find the roots of the quadratic equations.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n"); 
   	printf("-----------------------------\n");
    
    
    float a,b,c,x1,x2;
    printf("Enter value of the a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    float t1 = ((b*b)-(4*a*c));
    float s = sqrt(t1);
    x1 = (-b+s)/(2*a);
    x2 = (-b-s)/(2*a);
    
    printf("Root1:%lf",x1);
    printf("\nRoot2:%lf",x2);
    getch();
    return 0;
    
}                            
              
