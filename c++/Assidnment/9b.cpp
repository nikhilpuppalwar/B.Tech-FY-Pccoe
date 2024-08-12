#include <iostream>
#include <string>

using namespace std;

class matrix
{
  
     int n;
    int m;
    float arr3[100][100];

public:
 
    matrix(int x, int y)
    {
        n = x;
        m = y;
    }

    void addition(float arr1[][100], float arr2[][100])
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }

    void subtraction(float arr1[][100],float arr2[][100])
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr3[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
    }
    void multiplication(float arr1[][100], float arr2[][100])
    {
        if (m == n)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                { arr3[i][j] = 0;
                    for (int k = 0; k < n; k++)
                    {
                        arr3[i][j] += arr1[i][k] * arr2[k][j];
                    }
                }
            }
        }
        else
        {
            cout << "the size of the array is not equal to first and second number\n";
            cout << "therefore the multiplication cannot be done";
        }
    }

    void display()
    {
        cout << " the resultant array is: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr3[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    int m;
    float arr1[100][100];
    float arr2[100][100];

    cout << "enter the number to set the size of row of an array: ";
    cin >> m;
    cout << "enter the number to set the size of colum of an array: ";
    cin >> n;
    cout << "enter the element of first array " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl << "enter the element of second array " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }
        matrix t1(m, n);
        t1.addition(arr1, arr2);
        t1.display();

        return 0;
    
}