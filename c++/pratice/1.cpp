#include <iostream>
#include <string>

using namespace std;
template <class T>
void getdata(int n, T arr[])
{ // getting the element of an array from user
    cout << "enter the element of an array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
template <class T>
void sorting(int n, T arr[])
{ // this function is used to sort the array in ascending order
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
template <class X>
void display(int n, X arr[]) // to dispaly the array
{
    cout << "the sorted array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];      // this code is for integer data_type
    getdata(n, arr); // in this we send base address of a array to the fuction as a parameter
    sorting(n, arr); //  first parmeter is size of an array
    display(n, arr);

    float arr1[n]; // this code is for float data_type
    getdata(n, arr1);  
    sorting(n, arr1);
    display(n, arr1);

    char arr2[n]; // this code is for charcter data_type
    getdata(n, arr2);
    sorting(n, arr2);
    display(n, arr2);
    return 0;
}