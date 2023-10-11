#include <iostream>
using namespace std;

// Example of a C++ class
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    Calculator calc;
    cout << "Addition: " << calc.add(5, 3) << endl;
    cout << "Subtraction: " << calc.subtract(5, 3) << endl;
    return 0;
}
