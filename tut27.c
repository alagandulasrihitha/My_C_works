// #include<stdio.h>
// void printHello();
// int main()
// {
// printHello();
// printHello();
// printHello();
// // function call -->no of times u print printhello that many times it calls the function
// return 0;
// }
//  void printHello(){
//     printf("Hello \n");
// }




// #include<stdio.h>
// void printhello();
// void printgoodbye();
// int main()
// {
// printhello();
// printgoodbye();
// return 0;
// }
// void printhello(){
//     printf("hello");
// }
// void printgoodbye(){
// printf("goodbye \n");

// }



// #include<stdio.h>
// void printnamaste();
// void printbonjour();
// int main() 
// {
// printbonjour();// which is printed first is executed first
// printnamaste();
// return 0;
// }
// void printnamaste(){
//     printf("namaste \n");
// }
// void printbonjour(){
// printf("bonjour \n");

// }



// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int a,b;
//     printf("the value of a is");
//     scanf("%d",&a);
//     printf("the value of b is");
//     scanf("%d",&b);

//     int s=sum(a,b);
//     printf("the value of sum is %d",s);
// return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }

// #include<stdio.h>

// int sum(int a,int b);
// void printable(int n);

// int main(){
//     int n;
//     printf("enter no ");
//     scanf("%d",&n);

//     return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }



// #include<stdio.h>
// void namaste();
// void bonjour();

// int main(){
// printf("enter f for french & i for indian");
// char ch;
// scanf("%c",&ch);

// if(ch =='i'){ 
//     namaste();
// }else {
//     bonjour();
// }
// return 0;
// } 
//  void namaste(){
//     printf("namaste");
// }
//  void bonjour(){
//     printf("bonjour");
//  }




// #include<stdio.h>
// int sum(int a,int b);
// void main(){
// int a,b;
// printf("enter first number a");
// scanf("%d",&a);
// printf("enter seconf number b");
// scanf("%d",&b);
// int s=sum(a,b);
// printf("sum of a and b is %d",s);

// }
// int sum(int x,int y){
//     return x+y;
// }



#include<stdio.h>
#include<math.h>
int sum(int a,int b);
void printTable(int n);
 int main(){
 int n;
 printf("the value of n is");
 scanf("%d",&n);

 printTable(n);//declaring the function/argument/actual parameter
 return 0;
 }
 int sum(int x,int y){
 return x+y;
 }
void printTable(int n){//parameter
    for (int i=1;i<=10;i++){
        printf("%d",i*n);
    }
}
