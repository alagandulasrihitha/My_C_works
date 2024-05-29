#include<stdio.h>
#include<math.h>
void main()
{
float rate,amount,principal,n;
rate=5;
n=3;
printf("the value of principal");
scanf("%f",&principal);
printf("the value of rate is");
scanf("%f",&rate);
printf("the value of n is");
scanf("%f",&n);
amount=principal*(pow((1+(rate/100)),3));
printf(" %f",amount);
}