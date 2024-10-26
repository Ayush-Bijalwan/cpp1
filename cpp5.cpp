#include <iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base(int n) : num1(n) {}
};

class Derived : public Base {
    int num2;
public:
    Derived(int n1, int n2) : Base(n1), num2(n2) {}
    void product() {
        cout << "Product: " << num1 * num2 << endl;
    }
};

int main() {
    Derived d(4, 5);
    d.product();
    return 0;
}
