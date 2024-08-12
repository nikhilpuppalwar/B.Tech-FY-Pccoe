#include<stdio.h>
int binear(int arr[50],int beg,int end,int val){
    if (end>=beg)
 {
   int mid=(end + beg)/2;
    if (arr[mid]==val)
    {
        return mid+1;
    }
    
    else if (arr[mid]<val)
    {
     return binear(arr,mid+1,end,val);   
    }
    else{
        return binear(arr,beg,mid-1,val);
    }
 }
   return -1; 
}

int main(){
    int arr[50]={1,3,4,6,8,9,12,16,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val = 5;

    res=binear(arr[50],0,n-1,val);

    if (res==-1){
        printf("element not found or not present in array\n");
    }
    else{
        printf("res= %d",res);
    }
    return 0;
}