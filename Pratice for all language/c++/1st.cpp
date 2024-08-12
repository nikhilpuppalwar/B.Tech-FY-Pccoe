#include <iostream> 
#include <string>
#include<vector>

using namespace std;
void dispaly(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
       cout << arr[i] <<" ";
    }
    
}

int main() { 
    vector<int> nikhil;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << " enter the element for a vector: ";
        cin >> element;
        nikhil.push_back(element);
    }
    dispaly(nikhil);
 return 0;
}  
// write c++ program 