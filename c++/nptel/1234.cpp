#include <string>
#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
void display(vector<int> &v){
    cout<<"vector is"<<v.size()<<" \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> v;
     vector<int> v1;
    for (int i = 0; i < 4; i++)
    {
    v.push_back(i);
    }
     display(v);
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    display(v);
    return 0;

}