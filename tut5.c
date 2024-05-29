#include<stdio.h>
void main()
{
int a,b,d;
float c;
printf("enter given amount");
scanf("%d",&a);
printf("enter rate");
scanf("%f",&c);
printf("enter time");
scanf("%d",&b);
d=(a*b*c)/100;
printf("simple interest is %d \n ",d);
}