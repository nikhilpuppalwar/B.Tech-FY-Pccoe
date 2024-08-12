#include <iostream> 
#include <string>

using namespace std;
template<class t>
void  bubble(int n,t arr[],t sorted[]){

    for(int i=0;i<n;i++){
sorted[i]=arr[i];
    }
for (int i=0;i<n-1;i++){
    for (int  j = 0; j <n-1-i; j++)
    {
        if (sorted[j]>sorted[j+1])
        {
             t tmp;
        tmp = sorted[j];
        sorted[j]=sorted[j+1];
        sorted[j+1]=tmp;
        }
        
      
    }
    
}
}
int main() { 
    int n;
    cout<<"enter the size for an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int arr1[n];
    bubble(n,arr,arr1);
    cout<<endl<<"the original array is: ";
for (int i=0;i<n;i++){
    cout<<"[ "<<arr[i]<<" ]";
}
cout<<endl<<"the sorted array is: ";

for (int i=0;i<n;i++){
     cout<<"[ "<<arr1[i]<<" ]";
}
 return 0;
}




void selection(){
int n;
    int arr[64];
    for (int i = 0; i < n; i++)
    {
          int key=arr[0];
    for(int j=0;j<n-1;j++){
      
        if(key<arr[j]){
           arr[n-1-i]=key;
            key=arr[j];
            
        }
    }
}
}