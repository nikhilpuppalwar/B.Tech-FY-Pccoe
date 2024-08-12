#include<stdio.h>

int main()
{

  int a,b,count=0;
  printf("enter the number a\n");
  scanf("%d",&a);
  while (a!=0)
 
  {
a=a/10;
count++;  
       
  }
  printf("%d",count);
  
  return 0;
  
}