#include <iostream>
using namespace std;

class Number {
    int num;
public:
    Number(int n) : num(n) {}
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(Number n) {
        if (n.num <= 1) return false;
        for (int i = 2; i <= n.num / 2; i++) {
            if (n.num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Number number(num);
    PrimeChecker checker;
    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
