#include<stdio.h>
// prime number
int main(){
    int n,i,count=0;   //Given
    printf("enter the number\n");
    scanf("%d",&n); 

    for(i=1;i<=n;i++){  // loop for counting number of divisor
    if (n%i==0){
    count++;    //or count += 1; 
      }
    }

    if(count!=2)     //checking the number is prime or not
     {
      printf("n is  not prime number");
    }
    else{
    printf("n isprime");
    }
    return 0;
}