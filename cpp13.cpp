#include <iostream>
using namespace std;

class A;
class B;
class C;

class FriendClass {
public:
    void display(A& a, B& b, C& c);
};

class A {
private:
    int a_private = 10;
protected:
    int a_protected = 20;
    friend class FriendClass;
};

class B {
private:
    int b_private = 30;
protected:
    int b_protected = 40;
    friend class FriendClass;
};

class C {
private:
    int c_private = 50;
protected:
    int c_protected = 60;
    friend class FriendClass;
};

void FriendClass::display(A& a, B& b, C& c) {
    cout << "Class A: " << a.a_private << ", " << a.a_protected << endl;
    cout << "Class B: " << b.b_private << ", " << b.b_protected << endl;
    cout << "Class C: " << c.c_private << ", " << c.c_protected << endl;
}

int main() {
    A objA;
    B objB;
    C objC;
    FriendClass f;
    f.display(objA, objB, objC);
    return 0;
}
