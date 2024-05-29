#include<stdio.h>
int main(){
int i,j,start,end,count=0;
int sum=0;
printf("the values of start and end is ");
scanf("%d%d",&start,&end);
for(i=start+1;i<end;i++){
   count=0;
   for(j=2;j<i/2;j++)
   {
    if(i%j==0){
        count=1;
        break;
    }
   }
   if(count!=1){
    printf("%d",i);
     sum=sum+i;
   }
    
   } 

   printf("sum is %d",sum);
return 0;
}