#include<stdio.h>
#include<stdbool.h>
bool Isprime(int prime){
    if (prime==0 || prime ==1){
        return false;
    }
    for (int j = 2; j < prime; j++){
        if (prime%j==0)
        {
            return false;
        }
    }
    return true;}
int main(){
    int n;
    printf("\n enter the number:=");
    scanf("%d",&n);
    for (int i = 1; i < n; i++){
        bool flag=Isprime(i);
        if (flag==true)
        {
            printf("%d  ",i);
        }
        
    }
    return 0;
}
