#include<stdio.h>
#include<math.h>
void main()
{
int marks;
float gpa;
printf("marks");
scanf("%d",&marks);
gpa=(marks*10)/250;
printf("%f",gpa);

if (gpa==10){
    printf("o");
}else if (10>gpa && gpa>=9){
    printf("A");
}else if (gpa>=8 && gpa<9){
    printf("B");
}else if (gpa>=6.5&& gpa<8){
    printf("C");
}else if(gpa>=5&&gpa<6.5){
    printf("D");
}else if (gpa<5){
    printf("F");
}
}