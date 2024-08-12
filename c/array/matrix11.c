#include<stdio.h>    
#include<stdlib.h>  
// matrix multiplication
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  

printf("enter the number of row=");    // entering the value of rows and column
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    


printf("enter the first matrix element=\n");    // loop for 1st matrix
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    


printf("enter the second matrix element=\n");    // loop for 2nd matrix
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    // loop for result
for(i=0;i<r;i++)   
 
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    // condition for multiplicaton
}                             // mul=mul+a*b
}    
}    
                             
for(i=0;i<r;i++)    //loop for printing result 
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
