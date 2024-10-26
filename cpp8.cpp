#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int n1, int n2) : num1(n1), num2(n2) {}
};

class Derived1 : public Base {
public:
    Derived1(int n1, int n2) : Base(n1, n2) {}
    void displayFirst() {
        cout << "First number: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int n1, int n2) : Base(n1, n2) {}
    void displaySecond() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    Derived1 d1(4, 5);
    Derived2 d2(4, 5);
    d1.displayFirst();
    d2.displaySecond();
    return 0;
}
