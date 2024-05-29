#include<stdio.h>
#include<math.h>
void main()
{
int p,q,r,s;
printf("the value of p is");
scanf("%d",&p);
printf("the value of q is ");
scanf("%d",&q);
printf("the value of r is ");
scanf("%d",&r);
printf("the value of s is");
scanf("%d",&s);
int t1,t2,t3;
t1=(--p+q++)/(r--*s++);
t2= t1*t1*t1;
t3=sqrt(t2/t1);
printf("t1 is %d \n",t1);
printf("t2 is %d \n",t2);
printf("t3 is %d \n",t3);
printf("p is %d \n",p);
printf("q is %d \n",q);
printf("r is %d \n",r);
printf("s is %d \n",s);
}