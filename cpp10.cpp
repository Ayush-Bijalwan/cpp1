#include <iostream>
using namespace std;

class Student {
public:
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Student student;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << student.sum(a, b) << endl;
    return 0;
}
