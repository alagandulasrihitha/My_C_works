// #include<stdio.h>
// #include<string.h>
// int main(){
//   int i=0;
//  char str1[10]="srihitha";
// char str2[10]="greeshma";
//  i=0;
// while(str1[i]==str2[i]&&str1[i]!="\0"&&str2[i]!=0)
// i=i+1;
// if(str1[i]=='\0'&&str2[i]=='\0'){
//   printf("strings are equal \n");
// }
// else {
//   printf("strings are not equal \n");
// }
// }


#include <stdio.h>

int main() {
    int rows, i, j;

    // Get the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Loop to iterate through each row
    for (i = 1; i <= rows; i++) {
        // Loop to print spaces before the digits
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Loop to print the digit '1'
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("1");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}


