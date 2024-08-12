#include<iostream>
#include<vector>
#include<algorithm>
#include <typeinfo>
using namespace std;
template<typename T>
void display( vector<T> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
};

int main(){

    vector<int> v2={311,132,3211,445,455,611,7,846,94};
        vector<int> v1={311,132,3211,445,455,611,7,846,94};
        vector<int> v3;
        merge(v1.begin(),v1.end(), v2.begin(),v2.end(),v3);

        display(v3);
    // vector<int> :: iterator ni=v.begin();ni++;ni++;
    // auto in= find(v.begin(),v.end(),3211);
    // cout<<typeid(in).name();
// cout<< *in;
// cout<< endl<<*ni;
   
    return 0;
    }