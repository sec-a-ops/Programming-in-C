/*Experiment 1: installation, Environment setup and starting with C language
4. Write a C program to add two numbers, and take a number from the user. */
#include <stdio.h>
#include<conio.h>
int main()
{
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st"); 
    printf("-----------------------------");
    int a,b;
    printf("enter the value a = "); 
    scanf("%d",&a);
    printf("enter the value b = "); 
    scanf("%d",&b);
    int sum=0;
    sum = a + b;
    printf("%d",sum);

    getch();
    return 0;
}
    
    
        

