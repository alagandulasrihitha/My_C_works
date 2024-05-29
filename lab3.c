#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float  s,area;
printf("a is ");
scanf("%d",&a);
printf("b is ");
scanf("%d",&b);
printf("c is ");
scanf("%d",&c);
s = (a + b + c) /2;
area=sqrt(((s)*(s-a)*(s-b)*(s-c)));
printf("area is %f",area);
}