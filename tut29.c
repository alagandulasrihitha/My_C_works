#include<stdio.h>

// {
//     int age=22;
//     int *ptr=&age;

// // value
// printf("%d\n",age);
// printf("%d\n",*ptr);
// printf("%d \n",*(&age));

 
//     return 0;
// }
// {
// int x;
// int *ptr;

// ptr =&x;
// *ptr=0;//x=0
// printf("%d\n",x);
// printf("%d\n",*ptr);

// *ptr +=5;
// printf("x=%d \n",x);
// printf("*ptr=%d \n",*ptr);

// (*ptr)++;
// printf("x=%d \n",x);
// printf("*ptr=%d \n",*ptr);
// return 0;
// }

// {
// int i=5;
// int *ptr=&i;
// int **pptr=&ptr;

// printf("%d \n",**pptr);
// return 0;

// }



// void square(int n);
// void _square(int* n);

// int main()
// {
//     int number =4;
//     square(number);
//     printf("number=%d \n",number);

//     _square(&number);
//     printf("number =%d\n",number);
//     return 0;
// }
// //call by value
// void square(int n){
//     n=n*n;
//     printf("square=%d",n);

// }
//  void _square(int* n){
//     *n=(*n)*(*n);
//     printf("square=%d \n",*n);
//  }

// int main(){
// int x=3,y=5;
// _swap(&x,&y);
// printf("x=%d and y=%d",x,y);
// return 0;
// }

//  call by reference 
// void _swap(int *a,int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }


// void printaddress(int *n);
// int main(){
//     int n=4;
//     printaddress(&n);
//     printf("adress of n is %u \n",&n);
//     return 0;
// }
// void printaddress(int *n){
//     printf("the address is %u \n",n);
// }


void dowork(int a,int b,int *sum,int *product,int *avg);
int main(){
    int a=3,b=5;
    int sum ,product,avg;
    dowork(a,b,&sum,&product,&avg);
    printf("sum=%d,product=%d,avg=%d",sum,product,avg); 
    return 0;
}
void dowork(int a,int b,int *sum,int *product,int *avg){
*sum=a+b;
*product=a*b;
*avg=(a+b)/2; 
} 