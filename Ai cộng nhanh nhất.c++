#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    int A, B;
    cin >> A >> B;
    Calculator calculator;
    cout << calculator.add(A, B);
    return 0;
}