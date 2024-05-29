#include<stdio.h>
void main()
{
int a,b,c;
printf("the value of a is ");
scanf("%d",&a);
printf("the value of b is ");
scanf("%d",&b);
printf("the value of c is");
scanf("%d",&c);

if ((a<b && a<c ) || a<b) {
    printf("1");
} else {
    printf("0");
}   
}