#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public A {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

class E : public B {
public:
    void showE() {
        cout << "Class E" << endl;
    }
};

int main() {
    E e;
    e.showA();
    e.showB();
    e.showE();
    return 0;
}
