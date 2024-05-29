// #include<stdio.h>

// int main ()
// {
// int start,end;
// int sum=0;
// printf("start and end");
// scanf("%d %d",&start,&end);
// for (int i=start;i<=end;i++){
//     int sqrtnum=0;
//     while(sqrtnum*sqrtnum<i){
//         sqrtnum++;
//     }
//     if(sqrtnum*sqrtnum==i){
//         sum=sum+i;
//     }
// }
// printf("%d",sum);
// return 0;
// }



#include<stdio.h>
int main(){
int n,i,j;
printf("no of lines");
scanf("%d",&n);
for (i=1;i<=n;i++) {
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf(" %c",'A'+j-1);
    }
    printf("\n");
} 
return 0;   
}