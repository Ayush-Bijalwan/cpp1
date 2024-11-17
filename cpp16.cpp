#include <iostream>
using namespace std;

class Base {
public:
    virtual void sum(int a, int b, int c) {
        cout << "Base Sum: " << a + b + c << endl;
    }
};

class Derived : public Base {
public:
    void sum(int a, int b, int c) override {
        cout << "Derived Sum: " << a + b + c << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    b->sum(1, 2, 3);
    d.sum(4, 5, 6);
    return 0;
}
