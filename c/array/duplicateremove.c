#include<stdio.h>
int main(){
    int n;   // size declaration
    printf("enter the number\n");
    scanf("%d",&n);
int arr[n],max;


printf("enter the element\n");  // element declaratioon
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}


for (int i = 0; i < n; i++)  // nested loop
{
    for (int j = i+1; j < n; j++)
    {
    if (arr[i]==arr[j])           // duplicate removal
    {
        for (int k = j; k<n; k++)
        {
            arr[k]=arr[k+1];
        }
        n--;              // size of n and j decreases because duplicates are remove
           j--;
    }
 
    }
    
}
for (int i = 0; i < n; i++)    // printing new array
{
    printf("%d ",arr[i]);
}

    return 0;
}