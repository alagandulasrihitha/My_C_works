#include<stdio.h>
#include<stdlib.h>
int primeno(int num){
    for(int i=0;i<num;i++){
     if(num%i==0){
        return 0;
     }
     return 1;

    }

}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n *sizeof(int));
      printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        }
        
}