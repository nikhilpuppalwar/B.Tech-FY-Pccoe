#include <iostream>
#include <string>

using namespace std;
template<class T>
class vector
{

public:
    T *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    int dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * arr[i];
        }
        return d;
    }
};

int main()
{
    vector <float>(3);
    v.arr[0] = 1;
v.arr[1]=2;
v.arr[2]=3;


    vector <float> v1(3);
    v1.arr[0] = 1;
v1.arr[1]=2;
v1.arr[2]=3;
int a= v.dotproduct(v1);
cout << a << endl;
    return 0;
}