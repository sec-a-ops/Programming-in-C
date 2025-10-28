/* 
Experiment 4.4 
A town has a population of 100000. 
The population increases at the rate of 10% per year for 10 years. 
Program to find the population at the end of each year. 
*/ 
#include <stdio.h> 
#include <conio.h> 
int main() { 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");   
printf("-----------------------------\n");  
int i; 
f
 loat population = 100000; 
f
 loat rate = 0.10;  
int years = 10; 
printf("Year\tPopulation\n"); 
printf("---------------------\n"); 
for ( i = 1; i <= years; i++) { 
population = population + (population * rate); 
printf("%d\t%.2f\n", i, population); 
} 
getch(); 
return 0; 
}
