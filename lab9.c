#include<stdio.h>
#include<math.h>
void main()
{
char x;    
int a,b;    
printf("the value of x is");
scanf(" %c",&x);
printf("first number");
scanf("%d",&a);
printf("second number");
scanf("%d",&b);

if(x=='A'){
    printf("%d",a+b);
}else if (x=='m'){
    printf("%d",a*b);
}else if (x=='s'){
    printf("%d",a-b);
}else if (x=='d'){
    printf("%d",a/b);
}
else{
    printf("you entered the wrong character");
}
}