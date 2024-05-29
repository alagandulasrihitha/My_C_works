#include<stdio.h>
int main(){
    int* ptr;
    int arr[4];
   
    for(int i=0;i<4;i++){
        printf("Enter the %dth element", i);
        scanf("%d",ptr);
        ptr++;
    }
    int j=0;
     ptr=arr;
while( j<4){

    printf("%d",*ptr);
      ptr++;
    j++;
}
return 0;
}