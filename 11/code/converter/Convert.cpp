// Convert.cpp
#include "Convert.h"

// thid function returns an int even though an IntClass object
// is declared as the return type
IntClass f(int intValue) {
    return intValue;
}

// prints the int value inside an IntClass object
void printValue(IntClass x) {
    cout << x.getValue();
}
