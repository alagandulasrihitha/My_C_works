#include<stdio.h>
void main()
{
int june=30;
int bp;
float da,ra,ds,tes,deduct;
printf("basic pay");
scanf("%d",&bp);
ds=(bp)/june;
printf("daily salary %f ",ds);
da=(0.25*bp);
printf("dearness allowance %f ",&da);
ra=(0.1*bp);
printf("rent allowance %f",&ra);
deduct=(3*ds);
printf("deduct %f",&deduct);
tes=bp+ra+da-deduct;
printf("the total earned salary %f \n",tes);
}