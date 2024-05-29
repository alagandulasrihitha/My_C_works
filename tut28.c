// #include<stdio.h>
// void calculateprice(float value);

// int main(){
// float value=100.0;
// calculateprice(value);
// printf("%f \n",value);
// return 0;
// }
// void calculateprice(float value){
//     value=value+(0.18*value);
//     printf("final price is  %f \n",value);
// }



// #include<stdio.h>
// #include<math.h>
// void squarearea(float side);
// void circlearea(float radius);
// void rectanglearea(float a,float b);

// int main()
// {
// float a= 5.0;
// float b= 4.0;
// printf("the area of rectangle is %f",rectanglearea(a,b));
// return 0;
// }
// void squarearea(float side){
// return side*side;
// }
// void circlearea(float radius){
//     return 3.14*radius*radius;
// }
// void rectanglearea(float a,float b){
//     return a*b;
// }
 

// #include<stdio.h>
// #include<math.h>
// void printhw(int count);

// int main(){
// printhw(5);
// return 0;
// }
// //recursive function
// void printhw(int count){
//     if(count==0){ 
//         return;
//     }
//     printf("hello world \n");
//     printhw(count-1);
// }

// #include<stdio.h>
// int sum(int n);

// int main(){
// printf("the sum is %d",sum(5));
// }
// int sum(n){
//     if (n==1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1);
//     int sumN = sum(n-1)+n;
//     return sumN;
// }


// #include<stdio.h>

// int fact(int n);
// int main(){
// printf("%d",fact(4));
// return 0;
// }
// int fact(n){
//     if(n==1){
//         return 1;
//     }
//     int factNm1= fact(n-1);
//     int factN = fact(n-1)*n;
//     return factN;
// }


// #include<stdio.h>

// float converttemp(float celsius);
// int main(){
// float far= converttemp(32);
// printf("%f",far);
// return 0;
// }
// float converttemp(float celsius){
//     float far= celsius*(9.0/5.0)+32;
//     return far;
// }




#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("The number is positive.");
    } else if(num < 0) {
        printf("The number is negative.");
    } else {
        printf("The number is zero.");
    }
    return 0;
}