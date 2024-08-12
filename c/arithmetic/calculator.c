#include<stdio.h>

int main(){
    float a,b,res;
    char ch;
    int n,m,res1;
    printf("enter the value of a:-  ");
    scanf("%f",&a);
    
    printf("\n enter the value of b:-  ");
    scanf("%f",&b);

    printf("calculate for +,-,/,*,%%,\n");
    scanf(" %c", &ch);

   if (ch=='+')
   {
    res=a+b;
    printf("result of a=%f + b=%f  = %.3f ",a,b,res);
   }
   else if (ch=='-')
   {
  
    res=a-b;
    printf("result of a=%f - b=%f  = %.3f ",a,b,res);
   }
   else if (ch=='*')
   {
    
    res=a*b;
    printf("result of a=%f * b=%f = %.3f ",a,b,res);
   }
   else if (ch=='/')
   {
    
    res=a/b;
    printf("result of a=%f / b=%f  = %.3f ",a,b,res);
   }
else if (ch=='%')     // can't use float data type in % operator
{
    printf("re enter the value of a &b ");
    scanf("%d%d",&n,&m);
    res1=n%m;
    printf("result of n=%d %% m=%d  = %d ",n,m,res1);
}

   else
   {
    printf("wrong charater has been enter");
   }
   
   
    return 0;
}