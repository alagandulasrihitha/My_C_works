#include<stdio.h>
int sum(int n){
    int n;
    int s=0;
   while(n>0){
    s=s+n%10;
   }
return s;
}
int count(int n){
int n;
int c=0;
for(int i=n;i>0;i=i/10){
    c++;
    return c;
}
}
int main(){
    int n,a;
    printf("enter the choice");
    scanf("%d",&n);
    
    printf("enter the number");
    scanf("%d",&a);
    if(n==1){
    printf("%d",count(a));
    }
    else if(n==2){
        printf("%d",sum(a));
    }    
    else{
        printf("wrong");
    }
    


return 0;
}