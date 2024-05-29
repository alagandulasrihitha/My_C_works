#include<stdio.h>
#include<string.h>
struct Student{
    char name[100];
    int id;
    int  marks;
};
int main(){


struct Student student1[10],student2[10],temp;
printf("enter the values of first data");
for(int i=0;i<3;i++){
printf("name");
scanf("%s ",student1[i].name);
printf("id");
scanf(" %d ",&student1[i].id);
printf("marks");
scanf(" %d ",&student1[i].marks);
}
printf("enter the values of second data");
for(int i=0;i<3;i++){
printf("name");
scanf("%s ",student2[i].name);
printf("id");
scanf(" %d ",&student2[i].id);
printf("marks");
scanf(" %d ",&student2[i].marks);
}

for(int i=0;i<3;i++){
temp=student1[i];
student1[i]=student2[i];
student2[i]=temp;
}
for(int i=0;i<3;i++){
printf("student1 values after swapping");
printf(" %s %d %f",student1[i].name,student1[i].id,student1[i].marks);
printf("student2 values after swapping");
printf(" %s %d %f",student2[i].name,student2[i].id,student2[i].marks);
return 0;
}
}