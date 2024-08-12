#include<stdio.h>
# include <math.h>        // header file that store sqrt
                                // to find square root of an number
int main(){

   int a;               // taking input from user
    double res;
    printf("enter the value of a\n");
    scanf("%d",&a); 

    res=sqrt(a);                // syntax for square root
    printf("result= %f",res);
    return 0;

}