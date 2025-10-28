/*Experiment 6: Array 
6.2. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to count and display positive, negative, odd, and even numbers in an array.*/ 
#include <stdio.h> 
#include <conio.h> 
int main() { 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 
1st\n");   
printf("-----------------------------\n");  
int n, i, pos = 0, neg = 0, odd = 0, even = 0; 
printf("Enter number of elements: "); 
scanf("%d", &n); 
int arr[n]; 
printf("Enter elements:\n"); 
for (i = 0; i < n; i++) scanf("%d", &arr[i]); 
for (i = 0; i < n; i++) { 
if (arr[i] > 0) pos++; 
else if (arr[i] < 0) neg++; 
if (arr[i] % 2 == 0) even++; 
else odd++; 
} 
printf("Positive: %d\n", pos); 
printf("Negative: %d\n", neg); 
printf("Even: %d\n", even); 
printf("Odd: %d\n", odd); 
getch(); 
return 0; 
} 
