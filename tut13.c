#include<stdio.h>
#include<math.h>
void main()
{
// int l,b,area;
// printf("the value of length is ");
// scanf ("%d",&l);
// printf("the value of breadth is ");
// scanf("%d",&b);
// area=l*b;
// printf("the area is %d \n",area);
int a,b,c;
float s,area;
printf("a is ");
scanf("%d \n",&a);
printf("b is ");
scanf("%d \n",&b);
printf("c is");
scanf("%d \n",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area is %f \n",area);

}