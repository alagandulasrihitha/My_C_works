#include<stdio.h>
 

struct Marks{
   int math;
   int hindi;
   int english;
} ;
struct Student{
    char name[50];
    int id;
    struct Marks marks;
};
int main(){
    struct Student students[2];
    for(int i=0;i<2;i++){
        printf("enter the details%d",i+1);
        printf("name");
        scanf("%s",students[i].name);
        printf("id");
        scanf("%d",&students[i].id);
        printf("math marks");
        scanf("%d",&students[i].marks.math);
        printf("hindi marks");
        scanf("%d",&students[i].marks.hindi);
        printf("english marks");
        scanf("%d",&students[i].marks.english);
        printf("%s %s %s %s %s","name","id","maths","hindi","english");
        for(int i=0;i<2;i++){
            printf("%s %d %d %d %d",students[i].name,students[i].id,students[i].marks.math,students[i].marks.hindi,students[i].marks.english);
        }
    }
    return 0;
}

