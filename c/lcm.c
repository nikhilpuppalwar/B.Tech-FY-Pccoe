#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    // declaration of the local variables  
    int num1, num2, i, gcd, LCM;  
    printf (" Enter any two positive numbers: \n ");  
    scanf (" %d %d", &num1, &num2);  
      
    /* use for loop to define the num1 & num2. Where the num1 and num2 should be equal or less than i. */  
    for ( i = 1; i <= num1 && i <= num2; ++i)  
    {  
        // check whether i id divisible by both positive number num1 and num2.  
        if  (num1 % i ==0 && num2 % i == 0)  
        gcd = i; // assign the divisible number i to gcd          
    }  
    LCM = (num1 * num2) / gcd;  
      
    printf( " The LCM of two numbers %d and %d is %d. ", num1, num2, LCM );  
}  