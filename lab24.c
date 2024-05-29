#include<stdio.h>
int main(){
int arr[]={16,10,8,5,4};
int size=sizeof(arr)/sizeof(arr[0]);
int count=0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]%arr[j]==0){
            
          
            printf("%d %d\n",arr[i],arr[j]);
              count++;  
        }
    }
}
printf("%d",count);
}

 