// #include<stdio.h>
// #include<string.h>
// void slice(char str[],int n,int m);
// int main(){
// char str[]="helloworld";
// slice(str,3,6);

// }
// void slice(char str[],int n,int m){
//     char newstr[100];
//     int j=0;
//     for(int i=n;i<=m;i++,j++){
//         newstr[j]=str[i];
//     }
//     newstr[j]='\0';
//     puts(newstr);
// }




// #include<stdio.h>
// #include<string.h>

// int countvow(char str[]);
// int main(){
//     char str[]="helloworld";
//     printf("vowels are %d",countvow(str));

// }
// int countvow(char str[]){
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     return count;
// }





// #include<stdio.h>
// #include<string.h>
// void checkchar(char str[],char ch);
// int main(){
// char str[]="srihitha";
// char ch='e';
// checkchar(str,ch);
// }
// void checkchar(char str[],char ch){
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==ch){
//             printf("char is present");
//             return;
//         }
//     }
//     printf(" character is not present");
// }





// #include<stdio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printinfo(struct student s1);
// int main(){
    // struct student s1;
    // s1.roll = 1664;
    // s1.cgpa = 9.2;
    // strcpy(s1.name,"srihitha");

    // printf("student name %s\n",s1.name);
    // printf("student roll no %d\n",s1.roll);
    // printf("student cgpa %f\n",s1.cgpa);


    //  struct student s1={1664,9.2,"srihitha"};
    // printf("student roll number %d\n",s1.roll);

    // struct student *ptr=&s1;
    // printf("student roll number %d \n",(*ptr).roll);
    // printf("student roll number %d \n",ptr->roll);//arrow works as same

// printinfo(s1);
// return 0;

// }
// void printinfo(struct student s1){
//     printf("student information");
//     printf("student name %s\n",s1.name);
//     printf("student roll no %d\n",s1.roll);
//     printf("student cgpa %f\n",s1.cgpa);
// }





#include<stdio.h>
#include<string.h>

typedef struct computerengstudent{
     int roll;
     float cgpa;
     char name[100];
} coe;
int main(){
     coe s1;
     s1.roll = 1664;
     s1.cgpa = 9.2;
     strcpy(s1.name,"srihitha");
     printf("student roll no %d",s1.roll );
}