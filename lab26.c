#include<stdio.h>
int main(){
printf("Enter the length of rows and columns");
int n;
scanf("%d",&n);
int temp;
int arr[n][n];
printf("enter elements");
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    for(int k=1;k<arr[i][j];k++){
    if(arr[i][j]%k==0){
        if(arr[i][j]%k==0){
         temp =k;
        }
      if(temp!=0){
        printf("%d\n",temp);
      }else{
        printf("%d\n",temp);
      }
    }
    
}
}
}
return 0;
}
