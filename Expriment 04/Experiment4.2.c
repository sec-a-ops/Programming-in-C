/* Experiment 3.5  According to the gregorian calendar, it was Monday on 
the date 01/01/01. If Any year is input through the keyboard write a 
program to find out what is the day on 1st January of this year.*/ 
#include<stdio.h> 
#include<conio.h> 
int main(){ 
int yr, i, day=0, a; 
printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st\n");  
printf("-----------------------------\n"); 
 printf("Enter the year:"); scanf("%d", &yr); 
 for(i=1; i<yr; i++) 
 { 
     if(((i%4==0) && (i%100!=0)) && (i%400)) 
     { 
      day=day+366; 
  } 
     else 
  { 
   day=day+365; 
  } 
 } 
 a=day%7; 
 switch (a) 
 { 
  case 0: 
   printf("Monday"); 
   break; 
  case 1: 
   printf("Tuesday"); 
   break; 
  case 2: 
   printf("Wednesday"); 
   break; 
  case 3: 
   printf("Thursday"); 
   break; 
  case 4: 
   printf("Friday"); 
   break; 
  case 5: 
   printf("Saturday"); 
   break; 
  default: 
   printf("Sunday");   
              } 
getch(); 
return 0; 
} 
