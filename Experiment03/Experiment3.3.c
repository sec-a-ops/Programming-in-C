/*
WAP a C program to calculate compound interest*/
#include<stdio.h>
#include <conio.h>

int main() {
    
    float weight, height, bmi; 
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\nBatch: 1st\n"); 
    printf("-----------------------------\n");
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);     printf("Enter your height in meters: ");    
    scanf("%f", &height);    
    bmi = weight / (height * height);    
    printf("\nYour BMI is: %.2f\n", bmi);     
    if (bmi < 15)    
       printf("Category: Starvation\n");   
    else if (bmi >= 15.1 && bmi <= 17.5) 
       printf("Category: Anorexic\n"); 
    else if (bmi >= 17.6 && bmi <= 18.5)
       printf("Category: Underweight\n");    
    else if (bmi >= 18.6 && bmi <= 24.9) 
       printf("Category: Ideal\n"); 
    else if (bmi >= 25 && bmi <= 25.9) 
       printf("Category: Overweight\n");    
    else if (bmi >= 30 && bmi <= 39.9)     
       printf("Category: Obese\n");     
    else if (bmi >= 40)   
       printf("Category: Morbidly Obese\n");     
    else         
       printf("Category: Invalid range\n");   

	getch();
	return 0;
}
