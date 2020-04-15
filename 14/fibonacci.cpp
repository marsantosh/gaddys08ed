// fibonacci.cpp
// this program demonstrates a recursive function
// that computes Fibonacci numbers
#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
int fib(int);

int main() {
    int n;
    cout << "Enter the order of the Fibonacci sequence (n): ";
    cin >> n;
    cout << "The first " << n << " Fibonacci numbers are: " << endl;
    for (int x = 0; x < n; x++) {
        if (x % 10 == 0) {
            cout << endl;
        }
        cout << setw(7) << fib(x) << " ";
    }
    cout << endl;
    return 0;
}


/*
 * fib <- function
 * accepts an int argument in n
 * this function returns the nth Fibonacci number
 */
int fib(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}