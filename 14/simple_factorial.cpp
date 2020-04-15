// simple_factorial.cpp
// this program demosntrates a recursive function
// to calculate the factorial of a number
#include <iostream>
using namespace std;

// function prototype
int factorial(int);

int main() {
    int number;

    cout << "Enter an integer value and I will display" << endl;
    cout << "It's factorial: ";
    cin >> number;
    cout << "The factorial of " << number << " is ";
    cout << factorial(number) << endl;
    return 0;
}


/*
 * factorial <- function
 * a recursive function to compute the
 * factorial of a parameter, num.
 */
int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}