#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 5.0;

    cout << x << endl;
    cout << showpoint << x << endl;
    cout << setprecision(2) << x << endl;
    cout << fixed << x << endl;
}