#include<stdio.h>
#include<math.h>
int main()
{
// int marks;
// printf("the marks are ");
// scanf("%d",&marks);

// if(marks>30){
//     printf("pass");
// }else{
//     printf("fail");
// }


// int x=2;

// if(x=1){
//     printf("x is equal 1");
// }else{
//     printf("x is not equal to 1");
// }


char c;
printf("enter the character");
scanf(" %c",&c);

if (c>='A'&& c<='Z'){
    printf("upper case");
}else if (c >='a'&& c<='z'){
    printf("lower case");
}
else{
    printf("not english letter");
}
return 0;
}