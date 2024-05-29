#include<stdio.h>
int main(){
int a,b;
printf("the values of a and b is");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("after swapping the values of a and b are %d and %d",a,b);

}
int swap(int* x,int* y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}