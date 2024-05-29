#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    char section;
    int marks;
};
int main(){
    struct Student students[3];
    for(int i=0;i<3;i++){
        printf("enter the values %d \n",i+1);
        printf("name");
        scanf("%s",students[i].name);
        printf("section");
        scanf(" %c",&students[i].section);
        printf("marks");
        scanf("%d",&students[i].marks);   
    }
    struct Student copiedStudent[3];
    for(int i=0;i<3;i++){
    strcpy( copiedStudent[i].name,students[i].name);
    copiedStudent[i].section=students[i].section;
    copiedStudent[i].marks=students[i].marks;
    

    printf("display values");
    printf("%s \n",copiedStudent[i].name);
    printf(" %c \n",copiedStudent[i].section);
    printf(" %d \n",copiedStudent[i].marks);
    return 0;
    }
}