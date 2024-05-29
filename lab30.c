#include<stdio.h>
int product(int a,int b ){
   if(a==0||b==0){
    return 0;
   }
   else{
    return a+product(a,b-1);
   }
}
int power(int base,int exponent)
{
    if(exponent==0){
        return 1;
    }
    else{
        return base*power(base,exponent-1);
    }
}  



int main(){
    int a,b;
    printf("the value of a is");
    scanf("%d",&a);
    printf("the value of b is");
    scanf("%d",&b);
int productresult=product(a,b);
int powerresult=power(a,b);
printf("the product of %d and %d id %d",a,b,productresult);
printf("the product of %d and %d id %d",a,b,powerresult);
}