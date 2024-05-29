#include<stdio.h>
void main()
{
int a,b;
char c,d;
float f,e;
printf("the value of a and b is");
scanf("%d%d" ,&a,&b);
printf("the value of c and d  is");
scanf(" %c %c",&c,&d);
printf("the value of f amd e is");
scanf("%f%f",&f,&e);
printf("the value of a and b is %d, %d" ,a,b);
printf("the value of c and d is %c ,%c" , c,d);
printf("the value of f and e is %f ,%f", f,e);
}