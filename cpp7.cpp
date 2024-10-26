#include <iostream>
using namespace std;

class Base1 {
protected:
    int num1;
public:
    Base1(int n) : num1(n) {}
};

class Base2 {
protected:
    int num2;
public:
    Base2(int n) : num2(n) {}
};

class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}
    void sum() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Derived d(4, 5);
    d.sum();
    return 0;
}
