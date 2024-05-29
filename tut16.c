#include<stdio.h>
int main()
{
int a,b,c;
printf("the value of a is");
scanf(" %d", &a);
printf("the value of b is");
scanf(" %d", &b);
printf("the value of c is ");
scanf(" %d", &c);

int s ,greatest;
s = (a>b) ? a : b;
greatest = (c>s) ? c:s;
printf("the greatest value is %d \n",greatest);
return 0;
}