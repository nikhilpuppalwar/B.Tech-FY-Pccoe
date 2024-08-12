#include<stdio.h>
int main(){
    int n,val;
    printf("enter the size  ");
    scanf("%d",&n);
    printf("enter the vlue to be found in array:-  ");
    scanf("%d",&val);
int arr[n],max;
printf("enter the element\n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n; i++)
{
    if (arr[i]==val)
    {
        max=i+1;
    }
    
}

printf("%d",max);
    return 0;
}