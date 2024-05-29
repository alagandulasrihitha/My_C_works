#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,d,i,x1,x2,value;
printf("the value of a is");
scanf("%f",&a);  
printf("the value of b is");
scanf("%f",&b); 
printf("the value of c is");
scanf("%f",&c); 
d=(b*b)-(4*a*c);
value=sqrt(d);
x1=(((-b)+value)/(2*a));
x2=(((-b)-value)/(2*a)) ; 
switch(d>=0){

 case 1: 
printf("%f \n",x1);
printf("%f \n",x2);
break;

 default:printf("the roots are imaginary");
 
 }

}
