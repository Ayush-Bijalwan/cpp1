#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    Number operator-(const Number& other) const {
        return Number(value - other.value);
    }

    friend Number operator+(const Number& n1, const Number& n2);
    friend Number operator-(const Number& n1, const Number& n2);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

Number operator+(const Number& n1, const Number& n2) {
    return Number(n1.value + n2.value);
}

Number operator-(const Number& n1, const Number& n2) {
    return Number(n1.value - n2.value);
}

int main() {
    Number n1(10), n2(20);
    Number sum1 = n1 + n2;
    Number diff1 = n1 - n2;
    sum1.display();
    diff1.display();
    Number sum2 = operator+(n1, n2);
    Number diff2 = operator-(n1, n2);
    sum2.display();
    diff2.display();
    return 0;
}
