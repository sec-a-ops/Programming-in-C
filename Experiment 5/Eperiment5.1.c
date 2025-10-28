/*  
Experiment 4: Loops 
4.1. Write a program to enter numbers till the user wants.   
At the end, display the count of positive, negative, and zeroes 
entered.  
*/ 
#include <stdio.h> 
#include<conio.h>  
int main() {  
    int num, posCount = 0, negCount = 0, zeroCount = 0;  
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch:1st\n"); 
    printf("-----------------------------\n");  
    char choice;  
    do { 
printf("Enter a number: ");  
        scanf("%d", &num);  
        if (num > 0)  
            posCount++;  
        else if (num < 0)  
            negCount++;  
        else  
            zeroCount++;  
        printf("Do you want to enter another number? (y/n): ");  
        // Consume any trailing newline characters and take user input  
        while ((getchar()) != '\n');   
        scanf("%c", &choice);  
    } while (choice == 'y' || choice == 'Y');  
    printf("\nCount of positive numbers: %d\n", posCount);  
    printf("Count of negative numbers: %d\n", negCount);  
    printf("Count of zeroes: %d\n", zeroCount);  
    getch();  
   return 0;  
}
