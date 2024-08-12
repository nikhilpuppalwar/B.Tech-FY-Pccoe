# include <stdio.h>
// print the number of elements present in an array

int main(){
    int a;
    printf("enter the size of the array\n");
    scanf("%d",&a);
    int arr[a],length;

    length=sizeof(arr)/sizeof(arr[0]);  // imp syntax
    printf("a=%d  length=%d",a,length);
    return 0;
}