#include<stdio.h>
#include<math.h>
int main()
{
// int x;
// printf("the no is");
// scanf("%d",&x);
// printf("%d", x>9 && x<100);
 int age;
 printf("the age is ");
 scanf("%d",&age);

 if (age<18){
    printf("minor \n");
    printf("they can not vote \n ");
 } else{
    printf("adult");
 }
 printf("thank you");
return 0;
}