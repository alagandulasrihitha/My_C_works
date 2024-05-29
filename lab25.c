#include <stdio.h>
void main()
{printf("Enter the length of rows and columns");
int n;
scanf("%d",&n);
int arr[n][n];
printf("enter elements");
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&arr[i][j]);

int s=0;
for(int i=0;i<n;i++) { 
for(int j=0;j<n;j++)
if(i==j)
s+=arr[i][j];
}

printf("diagonal %d\n",s);
s=0;
for(int i=0;i<n;i++) {
for(int j=0;j<n;j++)
if(i>j)
s+=arr[i][j];

}
printf("lower triangle %d\n",s);
s=0;
for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++)
if(i<j)
s+=arr[i][j];

}
printf("upper triangle %d\n",s);
}