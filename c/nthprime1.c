#include <stdio.h>
int main(){
    int n,i,fact,j;
    printf("enter the number");
    scanf("%d",&n);
    printf("prime numbers are:\n");
    for(i=1;i<=n;i++)
    {
        fact=0;
        for(j=0;j<=n;j++)
        {
            if (i%j==0){
            fact++;
        }
         if(flag==2)
        {
         printf("%d",i);       
        }
        }
    }


            return 0;
}
