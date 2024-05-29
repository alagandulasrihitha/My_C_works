#include<stdio.h>
#include<math.h>
void main()
{

int number;
printf("enter number");
scanf("%d",&number);
if (number >=0){
    printf("positive ");
    if( number %2 ==0){
    printf("even number");
    } else{
        printf("odd");
    }

}else{
 printf("the number is not positive");
}
}