#include<stdio.h>
#include<string.h>
struct Student{
    char name[20];
    int id;
    int  marks;
};
int main(){
    struct Student students[4],t;
    for(int i=0;i<4;i++){
     printf("enter the details%d",i+1);
    printf("name");
    scanf("%s",students[i].name);
    printf("id");
    scanf("%d",&students[i].id);
    printf("marks");
    scanf("%d",&students[i].marks);
    }
   
for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
if(strcmp(students[i].name,students[j].name)>0) {
t=students[i];
students[i]=students[j];
students[j]=t;
    }
    }
}
for(int i=0;i<4;i++){
    printf(" %s %d %d",students[i].name,students[i].id,students[i].marks);
}
}