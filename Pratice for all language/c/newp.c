#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
   

printf("nth prime number are\n");
for(i=2;i<=n;i++)    
{    
    //for loop
for(int j=2;j<=n;j++)
{
    // if loop
if(i%j==0)
 {
    flag=flag+1;
}   

}
if (flag==1)
{
    printf("%d ",i);
}
} 
    
return 0;  
 }    