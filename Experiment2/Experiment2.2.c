/*WAP a C program to convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/
#include <stdio.h>
int main()
{ 
int celsius,f;
	
    
    printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n"); 
   	printf("-----------------------------\n");
  
  
  printf("enter temperature in Celsius");
	scanf("%d", &celsius);
	f= (celsius*9/5)+32;
	printf("%d",f);
	
	return 0; 
	
}
