// Subtraction of two matrix
#include<stdio.h>
int main(){  
int a,b,i,j;
printf("enter the number row and column \n");    // declaring the rows and column
scanf("%d%d" ,&a ,&b );
int arr1[a][b] ,arr2[a][b] ,res[a][b];     // declaring the matrix
printf("enter element of 1st array \n");  // for 1st matrix  
for (i = 0; i<a; i++){
    for ( j = 0; j<b; j++)
{
    scanf("%d", &arr1[i][j]);
}
}
printf("enter the element of 2nd matrix\n");  // for 2nd matrix
for (int i = 0; i<a; i++)
{
for (int j = 0; j <b; j++)
{
    scanf("%d",&arr2[i][j]);
}
}
for (int i = 0; i<a; i++)   // conditon for Subtraction
{
for (int j = 0; j <b; j++)
{
    res[i][j]=arr1[i][j]-arr2[i][j];
}
}
printf("Subtraction of two matrix is:-\n");  // printing the output 
for (int i = 0; i<a; i++)
{
for (int j = 0; j <b; j++)
{
  printf("%d ",res[i][j]);
}
printf("\n");
}   
    return 0;
}