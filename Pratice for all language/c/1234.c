#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void input(int n ,int arr[] )
{
    printf("\nenter the element of an array:\n");
      for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}

    void output(int n,int arr[]) 
{
  printf("/nthe array is ");
     for (int  i = 0; i < n; i++)
  {
     printf("%d ",arr[i]);
  }
}



int main()
{
    int b;
    printf("enter the size of an array :-  ");
    scanf("%d",&b);
    int arr[b];
    input(b,arr);
 output(b,arr);
return 0;
}