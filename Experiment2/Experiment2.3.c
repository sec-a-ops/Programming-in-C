/*⁠Write a program to calculate Compound Interest.*/


#include<stdio.h>
#include <conio.h>
#include<math.h>
int main()

{ 
  printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n"); 
  printf("-----------------------------\n");
  
	float principle,rate,time,CI;
	printf("Enter the principle");
	scanf("%f",&principle);
	printf("Enter the rate = ");
	scanf("%f",&rate);
	printf("Enter the time = ");
	scanf("%f",&time);

	CI = principal * pow((1 + rate / 100), time) - principal;
	printf("the compound intrest is = %f", CI);
	getch();
	return 0;
}
