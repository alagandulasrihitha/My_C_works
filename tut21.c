#include<stdio.h>
void main()
{
char x;
int a,b;

printf("enter character ");
scanf(" %c",&x);

printf("enter number 1");
scanf("%d",&a);

printf("enter the number 2 ");
scanf("%d",&b);

if(x=='A'){
    printf("%d \n",a+b);
}else if (x=='s'){
    printf("%d \n",a-b);
}else if (x=='m'){
    printf("%d \n",a*b);
}else if(x=='d'){
    printf("%d \n",a/b);
}else{
    printf("you entered the wrong sir \n");
}

}