#include<stdio.h>
#include<math.h>
void main(){
    int y;
for(int i=15;i>=8;i--){
y=(i%2)*1+((i/2)%2)*10+(((i/2)/2)%2)*100+(((i/2)/2)/2)*1000;
printf("%d \n ",y);
}
}