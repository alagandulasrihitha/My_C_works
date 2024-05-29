#include<stdio.h>
#include<math.h>
void main(){
int p,q,r,s,x,y,a,b;
int sr,pr;
printf("the value of a is");
scanf("%d",&a);
printf("the value of b is");
scanf("%d",&b);
p=a/10;
q=a%10;
x=p*1+q*10;
r=b/10;
s=b%10;
y=r*1+s*10;
printf("the value of x is %d \n",x);
printf("the value of y is %d \n",y);
sr=pow(x,(float)1/2);
pr=pow(y,(float)1/2);
if(sr*sr==x&&pr*pr==y){
  printf("%d",x+y);

}
else if(sr*sr==x||pr*pr==y){
    printf("%d",a+b);
}
else{
    printf("%d",a*b);
}
}
