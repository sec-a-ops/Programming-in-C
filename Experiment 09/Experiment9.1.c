/*Experiment 6: Array 
6.1. WAP to read a list of integers and store it in a single dimensional array. Write a C 
program to print the second largest integer in a list of integers. 
*/ 
#include <stdio.h> 
#include <conio.h> 
int main() { 
       printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 
1st\n");   
    printf("-----------------------------\n");  
  int n, i, first, second; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter elements:\n"); 
    for (i = 0; i < n; i++) scanf("%d", &arr[i]); 
    first = second = -2147483648; 
    for (i = 0; i < n; i++) { 
        if (arr[i] > first) { 
            second = first; 
            first = arr[i]; 
        } else if (arr[i] > second && arr[i] != first) { 
            second = arr[i]; 
        } 
    } 
    if (second == -2147483648) 
        printf("No second largest element\n"); 
    else 
        printf("Second largest element: %d\n", second); 
    getch(); 
    return 0; 
} 
