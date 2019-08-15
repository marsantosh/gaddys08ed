// this program uses a function to perform division
// it illustrates the return statement
#include <iostream>
using namespace std;

// function prototype
void divide(double arg1, double arg2);

int main() {
    double num1, num2;

    cout << "Enter two numbers and I will divide the first\n";
    cout << "number by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2);
    return 0;
}

/*
 * divide
 */
void divide(double arg1, double arg2) {
    if (arg2 == 0) {
        cout << "Sorry, can't divide by zero.\n";
        return ;
    }
    cout << "Te quotient is " << (arg1 / arg2) << endl;
}