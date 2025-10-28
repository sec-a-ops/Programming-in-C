/* 4.3 Patterns: 1*/
#include<stdio.h>
int main()
{
 printf("Ansh Bharadwaj\nSAP ID: 590029063\nCourse: BSc. CS.
\nBatch: 1");
 printf("\n-----------------\n");
 printf("The pattern is:\n");
 int i, j;
 for(i=1; i<=5; i++)
 {
 for(j=1; j<=i; j++)
 {
 printf("%d", i);
 }
 printf("\n");
 }
  return 0;
}
