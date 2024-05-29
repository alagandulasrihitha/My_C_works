#include<stdio.h>
#include<math.h>
void main()
{
int a;
printf("enter range \n"); 
scanf("%d",&a);
float amt = 0.0;

if(a<=75)
amt = a*2.80+30;
else if (a<=200 && a>75)
amt = 75*2.80 + (a-75)*3.55 + 50;
else if (a<=300 && a>201)
amt = 75*2.80 + 125*3.55 + ((a-200)*6.62)+80;
else if (a>300)
amt = 75*2.80+ (125*3.55) + (100*6.26) + ((a-300)*8.20)+100;

printf("bill is %0.3f",amt);
}