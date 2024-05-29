#include<stdio.h>
void main()
{
int a,b,c;
printf("the value of a is");
scanf("%d",&a);
printf("the value of b is");
scanf("%d",&b);
printf("the value of c is");
scanf("%d",&c);

int s,s1;
s=(a<b)? a:b;
s1=(s<c)? s:c;
printf("the value of s1 is %d",s1);
}