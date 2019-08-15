// this program uses overloaded functions
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
int square(int);
double square(double);

int main() {
    int userInt;
    double userReal;

    // get an int and a double
    cout << "Enter an nteger and a floating-point value: ";
    cin >> userInt >> userReal;

    // display the squares
    cout << "Here are their squares: ";
    cout << fixed << showpoint << setprecision(2);
    cout << square(userInt) << " and " << square(userReal) << endl;
    return 0;
}

int square(int number) {
    return number * number;
}

double square(double number) {
    return number * number;
}