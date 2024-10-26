#include <iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base(int n) : num1(n) {}
};

class Derived1 : public Base {
protected:
    int num2;
public:
    Derived1(int n1, int n2) : Base(n1), num2(n2) {}
};

class Derived2 : public Derived1 {
public:
    Derived2(int n1, int n2) : Derived1(n1, n2) {}
    void sum() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Derived2 d(4, 5);
    d.sum();
    return 0;
}
