#include<stdio.h>
void main(){
for(int i=4;i>=1;i--)
{
   for(int j=1;j<=4-i;j++){
   printf(" ");
   }
   for(int j=1;j<=2*i;j++){
    printf("%d",j);
   }
   printf("\n");
}


}