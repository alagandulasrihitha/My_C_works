#include<stdio.h>
void main()
{
 int a,b,c;
 printf("the value of a is");
 scanf("%d",&a);
 printf("the value of b is ");
 scanf("%d",&b);
//  c=a;
//  a=b;
//  b=c;
//  printf("%d \n",a);
//  printf("%d \n",b); 

 a=a+b;
 b=a-b; 
 a=a-b; 
  printf("%d \n",a);
 printf("%d \n",b);
}