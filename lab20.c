#include<stdio.h>
#include<math.h>
void main(){
for(int i=1;i<=6;i++){
    for(int j=1;j<=i-1;j++){
    printf(" ");

    }
    for(int j=1;j<=7-i;j++){
    printf("*");

    }
printf("\n");
}

}