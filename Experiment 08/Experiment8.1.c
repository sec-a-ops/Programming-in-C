/*Experiment 5: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various functions to understand 
its accessibility. */ 
#include <stdio.h> 
#include <conio.h> 
int globalVar = 100; 
void display() { 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");   
printf("-----------------------------\n");  
printf("Inside display(): globalVar = %d\n", globalVar); 
} 
void modify() { 
globalVar += 50; 
printf("Inside modify(): globalVar = %d\n", globalVar); 
} 
int main() { 
printf("Inside main(): globalVar = %d\n", globalVar); 
display(); 
modify(); 
printf("After modify(): globalVar = %d\n", globalVar); 
getch(); 
return 0; 
} 
