#include<stdio.h>
int  main()
{
    int n;
    printf("the value of n is");
    scanf("%d",&n);
while(n!=0){
    int sum=0;
    int i=1;
    int remainder;
    remainder=n%2;
    n=n/2;
    sum=sum+remainder*i;
    i=i*10;
}
return sum;
}