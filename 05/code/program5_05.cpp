// this program demonstrated the postfix and prefix
// modes of the increment and decrement operators
#include <iostream>
using namespace std;

int main() {
    // vars
    int num = 4;

    // illustrate postfix and prefix ++ operator
    cout << num << "   ";
    cout << num++ << "   ";
    cout << num << "   ";
    cout << ++num << "\n\n";

    // illustrate postfix and prefix -- operator
    cout << num << "   ";
    cout << num-- << "   ";
    cout << num << "   ";
    cout << --num << "\n\n";

    return 0;
}