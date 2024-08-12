// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
     int n;
    cout << "Enter the size for an array: ";
    cin >> n;
    int arr[64];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
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
  cout << endl << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}