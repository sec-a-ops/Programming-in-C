/* 4.3 Patterns: 10*/
#include<stdio.h>
int main()
{
 printf("Ansh Bharadwaj\nSAP ID: 5900290630\nCourse: BSc. CS.
\nBatch: 1");
 printf("\n-----------------\n");
 printf("The pattern is:\n");
 int i, j;
 for(i=1; i<=5; i++)
 {
 int k=i;
 for(j=1; j<=i; j++)
 {
 printf("%d", k);
 k--;
 }
 printf("\n");
 }
return 0;
}
