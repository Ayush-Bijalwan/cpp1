#include <iostream>
using namespace std;

class Number {
    int a;

public:
    Number(int val) : a(val) {}

    Number operator++() {
        a += 5;
        return *this;
    }

    Number operator--() {
        a -= 1;
        return *this;
    }

    Number operator-() {
        a = -a;
        return *this;
    }

    friend Number operator+(const Number& n1, const Number& n2);
    friend Number operator-(const Number& n1, const Number& n2);

    void display() {
        cout << "Value: " << a << endl;
    }
};

Number operator+(const Number& n1, const Number& n2) {
    return Number(n1.a + n2.a);
}

Number operator-(const Number& n1, const Number& n2) {
    return Number(n1.a - n2.a);
}

int main() {
    Number n1(5), n2(10);
    ++n1;
    n1.display();
    --n1;
    n1.display();
    -n1;
    n1.display();

    Number sum = n1 + n2;
    sum.display();

    Number diff = n2 - n1;
    diff.display();
    return 0;
}
