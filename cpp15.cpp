#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << "Sum of two numbers: " << sum(1, 2) << endl;
    cout << "Sum of three numbers: " << sum(1, 2, 3) << endl;
    cout << "Sum of four numbers: " << sum(1, 2, 3, 4) << endl;
    return 0;
}
