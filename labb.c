#include<stdio.h>
#include<stdlib.h>
int coprime(int *ptr,int *ptr1,int n);
   


void main(){
    int n;
    
    printf("the value of n is");
    scanf("%d",&n);

       int *ptr = (int *)malloc(n *sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

          int *ptr1 = (int *)calloc(n, sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr1[i]);
    }
  coprime(ptr,ptr1,n);
}
int coprime(int *ptr,int *ptr1,int n){
int i;
    for(i=0;i<n;i++){
        ptr[i]=ptr[i]%10;
         ptr1[i]=ptr1[i]%10;
    if(ptr[i]%ptr1[i]!=0){
    printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    }
}