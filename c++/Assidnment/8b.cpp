#include <iostream>
using namespace std;
class Fibonacci_Series
{
private:
    int count;

public:
    Fibonacci_Series()
    {
        count = 0;
    };
    Fibonacci_Series(int &x)
    {
        count = x;
    }

    void without_recursion()
    {
        int a = 0, b = 1;
        int res;
        int temp;
        for (int i = 0; i < count; i++)
        {
            res = a + b;
            a = b;
            b = res;
            cout << res << " ";
        }
        cout << endl;
    }
    void with_recursion(int n)
    {
        static int n1 = 0, n2 = 1, n3;
        if (n > 0)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << " ";
            with_recursion(n - 1);
        }
    }

    ~Fibonacci_Series(){};
};

int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;
    Fibonacci_Series f1(num);
    f1.without_recursion();
    f1.with_recursion(num);
    return 0;
}