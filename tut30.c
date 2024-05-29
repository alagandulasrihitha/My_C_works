// #include<stdio.h>
// int main(){
// int marks[3];
// printf("enter marks 0");
// scanf("%d",&marks[0]);

// printf("enter marks 1");
// scanf("%d",&marks[1]);

// printf("enter marks 2");
// scanf("%d",&marks[2]);


// printf("%d %d %d",marks[0],marks[1],marks[2]);
//  return 0;

// }





// #include<stdio.h>
// int countodd(int arr[],int n);

// int main()
// {
// int arr[]={1,2,3,4,5,6};
// printf("%d",countodd(arr,6));
// return 0;

// }
// int countodd(int arr[],int n){
// int count=0;
// for(int i=0;i<n;i++){
//     if(arr[i]%2 !=0){
//         count++;
//     }
// }
// return count;

// }






// #include<stdio.h>
// int main(){
// int arr[]={1,2,3,4,5,6};
// int count=0;
// for(int i=0;i<6;i++){
//    if(arr[i] %2 !=0){
//     count++;
//    }
// }
// printf("%d",count);
// return 0;
// }







// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;

//     while (start < end) {
//         // Swap the elements at start and end
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         // Move the pointers toward each other
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     reverseArray(arr, size);

//     printf("\nReversed Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }





// #include<stdio.h>

// int reverse(int arr[],int n);
// int printArr(int arr[],int n);

// int main(){
// int arr[]={1,2,3,4,5};
// reverse(arr,5);
// printArr(arr,5);
// return 0;
// }
// int printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d \t",arr[i]);
//     }
//     printf("\n");
// }

// int reverse(int arr[],int n){
//     for(int i=0;i<n/2;i++){
//         int firstvalue=arr[i];
//         int secondvalue=arr[n-i-1];
//         arr[i]=secondvalue;
//         arr[n-i-1]=firstvalue;
//     }
// }







// #include<stdio.h>
// int main(){
// int n;
// printf("enter the number ");
// scanf("%d",&n);
// int fib[n];
// fib[0]=0;
// fib[1]=1;

// for(int i=2;i<=n;i++){
//     fib[i]=fib[i-1]+fib[i-2];
//     printf("%d \t",fib[i]);
// }
// printf("\n");
// return 0; 
// }







// #include<stdio.h>

// void storetable(int arr[][10],int n,int m,int number);
// int main(){
// int table[2][10];
// storetable(table,0,10,2);
// storetable(table,1,10,3);

// for(int i=0;i<10;i++){
// printf("%d \t",table[0][i]);
// }
 
// for(int i=0;i<10;i++){
// printf("%d \t",table[1][i]);

// }
// return 0;
// }
// void storetable(int arr[][10],int n,int m,int number){
//     for(int i=0;i<m;i++){
//         arr[n][i]=number*(i+1);
//     }
// }




// #include<stdio.h>
// void printstring(char arr[]);
// int main(){
// char firstname='srihitha';
// char secondname='alagandula'; 
// printstring(firstname);
// return 0;
// }
// void printstring(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf(" %c",arr[i]);
//     }
//     printf("\n");
// }




// #include<stdio.h>
 
// void printstring(char arr[]);
// int countlength(char arr[]);

// int main(){ 
//     char name[]="srihitha";
    
//     printf("length is %d",countlength(name));
//     return 0;
// }
// int countlength(char arr[]){
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// void printstring(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf(" %c",arr[i]);
//     }
//     printf("\n");
// }





// #include<stdio.h>
// #include<string.h>
// int main(){
//     char oldstr[]="oldiee";
//     char newstr[]="newiee";
//     // strcpy(newstr,oldstr);//reverse both the values
//     // strcat(oldstr,newstr);//combines both the values
//     // puts(oldstr);


//     printf("%d",strcmp(oldstr,newstr));
// }




// #include<stdio.h #include<string.h>

// void salting(char password[]);
// int main(){
// char password[200];
// scanf("%s",password);
// salting(password);
// }
// void salting(char password[]){
//     char salt[]="123";
//     char newpass[200];
//     strcpy(newpass,password);
//     strcat(newpass,salt);
//     puts(newpass);
// }