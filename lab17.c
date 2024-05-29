#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
char c;
printf("value of a is");
scanf("%d",&a);
printf("value of b is");
scanf("%d",&b);
printf("the value of c is ");
scanf(" %c",&c);
 switch(c){
    case'a':printf("the addition of a and b is %d ",a+b);
    break;
    case's':printf("the substraction of a and b is %d",a-b);
    break;
    case'm':printf("the addition of a and b is %d ",a*b);
    break;
    case'd':printf("the addition of a and b is %d",a/b);
    break;
 }
}