#include<stdio.h>
// finding factorial(n!) for any number
int main()    
{    
 int n;    
     printf("Enter a number: ");    
     scanf("%d",&n);    

     int fact=1;

                   // loop for finding factorial
    for(int i = 1;  i <= n ; i++){    
      fact=fact*i;                         // condition
  }    
  printf("Factorial of %d is: %d",n,fact);    // solution
return 0;  
}   