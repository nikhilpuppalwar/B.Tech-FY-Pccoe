#include<stdio.h>
# include <math.h>     // header file that store pow
                                         //To find the power of an number
int main(){

   int base,exp;                      // taking input from user
    double res;
    printf("enter the value of base & exponent \n");
    scanf("%d%d",&base,&exp);

    res=pow(base,exp);              // syntax for power
    printf("result=%.3f",res);     // result
    return 0;

}