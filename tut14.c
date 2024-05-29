#include<stdio.h>
void main()
{
char a,b;
printf("the value of a is ");
scanf("%c",&a);
while(getchar()!='\n');

printf("the value of b is ");
scanf("%c",&b);
while(getchar()!='\n');

if (a!=b){
    printf("1");
} else{
    printf("0");
}

}