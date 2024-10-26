#include <iostream>
using namespace std;

class SumPositive {
    int* arr;
    int size;
    int sum;

public:
    SumPositive(int* inputArr, int n) : size(n), sum(0) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    SumPositive(const SumPositive& obj) : size(obj.size), sum(0) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
    }

    void displaySum() {
        cout << "The sum of all positive numbers in the array is: " << sum << endl;
    }

    ~SumPositive() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SumPositive originalObj(arr, n);
    SumPositive copyObj = originalObj; 
    copyObj.displaySum();

    delete[] arr;
    return 0;
}
