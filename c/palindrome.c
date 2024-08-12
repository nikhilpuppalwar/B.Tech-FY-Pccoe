#include<stdio.h>  
int main()   
//to check palindrome 
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    

temp=n;    
while(n>0)    // loop for reversing number 
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    // checking with reverse no.
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   