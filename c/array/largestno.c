#include <stdio.h>
// to find largest number in array
int main()
{
int n;             // to declare the size of the array
printf("enter the length/size of the array\n");
scanf("%d",&n);
int arr[n];
printf("enter the element of the array\n"); 
for(int i=0;i<n;i++){     // loop for taking input from user and store the value in array
    scanf("%d",&arr[i]);
}

int max=arr[0];           // to find largest number(condition)
for (int i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
    max=arr[i];
    }
    
}
printf("the largest number in the array is %d",max);  //output
return 0;
}