#include<stdio.h>

int main()
{
    int no, sd=2;
    printf("enter a number");
    scanf("%d",&no);
    while (no%sd!=0)
    {
    sd++;

    }
    
    printf("the smallest divisor of %d is %d",no,sd);
    return 0;;


}