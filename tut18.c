#include<stdio.h>
#include<math.h>
int main()
// {
// int day;
// printf("the day(1-7)");
// scanf("%d",&day);

// if(age>=18){
//     printf("adult");
// }
// else if(age>13 && age<18){
//     printf("teenager");
// }
// else{
//     printf("child");
// }



//ternary operator

// age>=18 ? printf("adult"):printf("not adult");



// switch(day){
//     case 1 : printf("monday \n");
//     break;
//     case 2 : printf("tuesday \n");
//     break;
//     case 3 : printf("wednesday \n");
//     break;
//     case 4 : printf("thursday \n");
//     break;
//     case 5 : printf("friday \n");
//     break ;
//     case 6 : printf("saturday \n");
//     break;
//     case 7 : printf("sunday \n");
//     break;
//     default : printf("no valid day! \n");
// }



// nested 
{
int number;
printf("enter number");
scanf("%d",&number);
if (number >=0){
    printf("positive ");
    if( number %2 ==0){
    printf("even number");
    } else{
        printf("odd");
    }

}else{
 printf("negative number");

}
return 0;
}