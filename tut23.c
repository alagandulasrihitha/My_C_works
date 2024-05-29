#include<stdio.h>
void main()
{
int n,remainder,reverse=0,original;

printf("enter number");
scanf("%d",&n);
original=n;

while(n!=0){
remainder=n%10;
reverse= reverse*10+remainder;
n /= 10;
} 
if(original==reverse){
    printf("%d is a palindrome",original);
}else{
    printf("%d is not a palindrome",original);
}
}