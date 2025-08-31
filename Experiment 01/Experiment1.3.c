/*Write a C program to perform four arithmetic operations on two variables. */
#include <stdio.h>
#include <conio.h>
int main(){

  printf("Name: Ansh Bharadwaj\nSap-ID: 590029063\nCourse: Bsc CS\n Batch: 1st"); 
  printf("-----------------------------");
  int a,b;
    printf("enter the value a = "); 
    scanf("%d",&a);
    printf("enter the value b = "); 
    scanf("%d",&b);
    int add=0;
    add = a + b;
    printf("%d\n",add);
    
    int c,d;
    printf("enter the value c = "); 
    scanf("%d",&c);
    printf("enter the value d = "); 
    scanf("%d",&d);
    int sub=0;
    sub = c - d;
    printf("%d\n",sub);
    
    int e,f;
    printf("enter the value e = "); 
    scanf("%d",&e);
    printf("enter the value f = "); 
    scanf("%d",&f);
    int mul=0;
    mul = e*f;
    printf("%d\n",mul);
    
    int q,r;
    printf("enter the value q = "); 
    scanf("%d",&q);
    printf("enter the value r = "); 
    scanf("%d",&r);
    int div=0;
    div = q/r;
    printf("%d\n",div);

    getch();
 
 
    return 0;
}
