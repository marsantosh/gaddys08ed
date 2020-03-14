// main.cpp
// this program demonstrates the deficiencies of the
// default copy constructor
#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;


int main() {
    // create an object
    NumberArray first(3, 10.5);

    // male a copy of the object
    NumberArray second = first;

    // display the values of the two objects
    cout << setprecision(2) << fixed << showpoint;
    cout << "Value stored on first object is ";
    first.print();

    cout << endl << "Value stored in second object is ";
    second.print();

    cout << endl << "Only the value in second object "
         << "will be changed." << endl;
    
    // now change tje value stored in the second object
    second.setValue(20.5);

    // display the values stored in the two objects
    cout << "Value stored in first object is ";
    first.print();
    cout << endl << "Value stored in second object is ";
    second.print();

    return 0;
}