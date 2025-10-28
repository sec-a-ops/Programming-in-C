/* Experiment 5: Variable and Scope of Variable 
5.3. Declare variables within different code blocks (enclosed by curly braces) and test their 
accessibility within and outside those blocks.*/ 
#include <stdio.h> 
#include <conio.h> 
int main(){ 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");   
printf("-----------------------------\n");  
int x = 10; 
{ 
} 
{ 
int y = 20;        
printf("Inside first block: x = %d, y = %d\n", x, y); 
int z = 30; 
printf("Inside second block: x = %d, z = %d\n", x, z); 
} 
printf("Outside blocks: x = %d\n", x); 
getch(); 
return 0; 
}
