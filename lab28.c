#include<stdio.h>
int lcm(int a,int b);

int main(){
    int a,b;
    printf("the value of a ");
    scanf("%d",&a);
    printf("the value of b");
    scanf("%d",&b);
   int prod=a*b;
   int x=prod;
   for(int i=2;i<=prod;i++){
  int  p1=i%a;
  int p2=i%b;
  if(p1==0&&p2==0){
    if(i<x){
        x=i;
    }
  }
   }
   printf("the lcm of %d and %d is %d",a,b,x);
   }
