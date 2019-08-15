#include "ThisExample.h"
#include <iostream>
using namespace std;

// set value object
void Example::setValue(int a) {
    x = a;
}

// print address value
void Example::printAddressAndValue() {
    cout << "The object at address " << this << " has "
         << "value " << (*this).x << endl;
}