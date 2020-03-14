// main.cpp
// this program demonstrates the use of copy constructors
#include <iostream>
#include <iomanip>
#include "NumberArray.h"

using namespace std;

int main() {
    NumberArray first(3, 10.5);

    // make a second copy of first object
    NumberArray second = first;

    // display the values of the two objects
    cout << setprecision(2) << fixed << showpoint;
    cout << "Value stored in first object is ";
    first.print();
    cout << "\nValue stored in second object is ";
    second.print();
    cout << "\nOnly the vlaue in second object will be changed.\n";

    // now change value stored in second
    second.setValue(20.5);

    // display the values stoed in the two objects
    cout << "Value stored in first object is ";
    first.print();
    cout << endl << "Value stored in second object is ";
    second.print();
    cout << endl;
    
    return 0;
}