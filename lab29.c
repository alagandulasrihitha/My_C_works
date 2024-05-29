
#include <stdio.h>
int prime(int n){
if(n<=1){
    return 0;
}
for(int i=1;i<=n;i++){
    if(n%i==0){
        return 0;
    }
}
return n;
}
void indexfun(int arr[],int n){
  for(int i=0;i<=n;i++){
    if(prime(arr[i])){
        printf("%d",i);
    }
  }
}

int main() {
    int arr[]={2,7,5,6,8,11,23,14,19};
   
   
    
    indexfun(arr,9);
    return 0;
}