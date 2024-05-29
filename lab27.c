#include<stdio.h>

int seriessum(int n)
{
    int sum;
if(n==1)
{
    return 0;
}
else{
return(n-1)*n+seriessum(n-1);
    
}
}

int main(){
    int n;
    int sum=0;
    printf("the value of number is ");
    scanf("%d",&n);
    
   sum= seriessum(n+1); 
    
printf("%d",sum);
return 0;
}