#include<stdio.h>
#include<math.h>
void main()
{
float rate,p,n;
float a,b,c;
n=3;
rate=5;
p=6000;
a= (1+(rate/100));
b=pow(a,3);
c=p*b;

printf(" %f \n",c);
}