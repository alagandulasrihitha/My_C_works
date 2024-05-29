#include<stdio.h>
#include<math.h>
 
int main()
{
// printf("%d",16%10);
// printf("%d",-8%3);//% gives the remainder

int a =(int) 1.9999;
printf("%d \n",a);

// operator precedence
//* / %
// + -
// =

// same precedence then go from left to right
int x=5+2/2*3; 
printf("%d",x);
return 0;    
} 