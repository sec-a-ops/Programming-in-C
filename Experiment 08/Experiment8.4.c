/* Experiment 5: Variable and Scope of Variable 
5.4. Declare a static local variable inside a function. Observe how its value persists across function 
calls. */ 
#include <stdio.h> 
#include <conio.h> 
void counter() { 
static int count = 0; 
count++; 
printf("Function called %d times\n", count); 
} 
int main() { 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");   
printf("-----------------------------\n");  
counter(); 
counter(); 
counter(); 
getch(); 
return 0; 
}
