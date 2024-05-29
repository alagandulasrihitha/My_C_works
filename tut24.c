#include<stdio.h>
void main()
{
int n,remainder,add=0,patientid,original;
printf("enter token");
scanf("%d",&n);
original=n;
while(n!=0){
    remainder=n%10;
    add=add+(remainder*remainder*remainder);
    patientid=patientid*10+remainder;
    n /= 10;
}
if(add==original){
    printf("free treatment");
}else{
    printf("no free treatment");
}
}