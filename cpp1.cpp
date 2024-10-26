#include <iostream>
using namespace std;

class SumOfNaturalNumbers {
    int n;

public:
    SumOfNaturalNumbers() {
        cout << "Enter the value of n: ";
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumOfNaturalNumbers sumObj;
    return 0;
}
