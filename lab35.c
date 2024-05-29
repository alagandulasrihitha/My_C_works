#include<stdio.h>
int swap(int* ptr1,int* ptr2){
    int t;
    for(int i=0;i<4;i++){
t=*(ptr1+i);
 *(ptr1+i)=*(ptr2+i);
 *(ptr2+i)=t;
}
}
int main(){
       int* ptr1;
    int arr1[4];
   ptr1=arr1;
    for(int i=0;i<4;i++){
        printf("Enter the %dth element ", i);
        scanf(" %d",ptr1);
        ptr1++;
    }
    int j=0;
     ptr1=arr1;
while( j<4){

    printf("%d\n",*ptr1);
      ptr1++;
    j++;
}
      int* ptr2;
    int arr2[4];
   ptr2=arr2;
    for(int i=0;i<4;i++){
        printf("Enter the %dth element of second array", i);
        scanf("%d",ptr2);
        ptr2++;

    }
    int x=0;
     ptr2=arr2;
while( x<4){

    printf("%d\n",*ptr2);
      ptr2++;
    x++;
}
swap(arr1,arr2);
 for(int i=0;i<4;i++){
    printf("after swapping array1 %d \n",arr1[i]);
 }
 for(int j=0;j<4;j++){
    printf("after swapping array2 %d \n",arr2[j]);
 }
return 0;
}