#include<stdio.h>
#include<stdlib.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
}
return reversed;
}
void Reverse(int*arr,int n) {
    for(int i=1;i<n;i++){
        arr[i]=reverseNumber(arr[i]);
    }
}

int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
     int *ptr = (int *)calloc(n, sizeof(int));
      
    printf("enter the elements");
    for(int i=1;i<n;i++){
        scanf("%d",&ptr[i]);
    }  
    Reverse(ptr,n);
printf("reverse of numbers");
for(int i=1;i<n;i++){
    printf("%d \n",ptr[i]);
}
}