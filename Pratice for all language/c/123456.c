#include<stdio.h>
int main(){
    int n;
    printf("enter the number :- ");
scanf("%d",&n);
int *ptr=&n;
printf("\n ptr= %d",*ptr);
    return 0;
}