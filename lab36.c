#include<stdio.h>
void Maxmin(int *element,int size,int *max,int *min){
    *max=*min=element[0];
    for(int i=1;i<size;++i){
        if(element[i]>*max){
            *max=element[i];
        }
        if(element[i]<*min){
            *min=element[i];
        }
    }
}
int main(){
    int element[100],size,max,min;
    printf("enter the size of array ");
    scanf("%d",&size);
    printf("enter the elements of array ");
    for(int i=0;i<size;++i){
        printf("element %d ",i+1);
        scanf("%d",&element[i]);
    }
    Maxmin(element,size,&max,&min);
    printf("Maximum=%d\n,Minimum=%d\n",max,min);
    return 0;
}