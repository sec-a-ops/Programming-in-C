/*  
Experiment 4: Loops 
4.2.  Write a  program to print the multiplication table of the 
number entered by the user.  
It should display in the format: Num * i = Result.  
*/ 
#include <stdio.h>  
#include<conio.h> 
int main() {  
int num, i;  
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n"); 
printf("-----------------------------\n");  
printf("Enter a number: ");  
scanf("%d", &num);  
printf("Multiplication table of %d:\n", num);  
for (i = 1; i <= 10; i++) {  
printf("%d * %d = %d\n", num, i, num * i);  
} 
getch(); 
return 0;  
} 
