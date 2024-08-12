#include<stdio.h>

int main(){
  int n;
  printf("enter array size: ");
  scanf("%d",&n);
  int arr[n],b[n];
   
   printf("enter the element of the array: ");

   for ( int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }

   int j=0;
   for(int i=n-1 ; i>=0;i-- ){
    b[j]=arr[i];
    j++;
    
   
   }
printf("reverse order is :  ");
   for ( int i = 0; i < n; i++)
   {
    printf("%d ",b[i]);
    
   }
   return 0;

   
}