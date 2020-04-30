// program16_06.cpp
// this program uses a function template
#include <iostream>
#include <iomanip>
using namespace std;


/*
 * NOTE:
    All type parameters defined in a function template must appear at least once in
    the function parameter list.
 */

// template definition for square function
template <class T>
T square(T number) {
    return number * number;
}


int main() {
    cout << setprecision(5);

    // get an integer and compute its square
    cout << "Enter an integer: ";
    int iValue;
    cin >> iValue;

    // the compiler create int square(int) at the
    // first occurrence of a call to square with an
    // int argument
    cout << "The square is " << square(iValue);

    // get a double and compute is square
    cout << "\nEnter a double: ";
    double dValue;
    cin >> dValue;

    // the compiler creates double square(double)
    // at the first occurrence of a call to square
    // with a double argument
    cout << "The square is " << square(dValue) << endl;

    return 0;
}