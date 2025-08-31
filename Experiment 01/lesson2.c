/*Experiment 1: installation, Environment setup and starting with C language
4. Write a C program to add two numbers, take number from user. */
#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b;//declaration
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
    
    
        
