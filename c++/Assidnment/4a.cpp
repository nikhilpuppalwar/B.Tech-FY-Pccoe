#include <iostream> 
using namespace std;

class array_sorting
{
private:
    int* arr; // Dynamically allocated array
    int n;    // Size of the array
public:
    void getdata(){
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        // Allocate memory for the array
        arr = new int[n];

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void bubbleSort() {
        int temp;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void output_data()
    {
        cout << "The sorted array is: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    ~array_sorting() {
        delete[] arr; // Deallocate memory when object is destroyed
    }
};

int main() {
    array_sorting t1;
    t1.getdata();
    t1.bubbleSort();
    t1.output_data();
    return 0;
}
