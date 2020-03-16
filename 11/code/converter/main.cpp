// main.cpp
// this program demonstrates the action of convert constructors
#include "Convert.h"

// function prototypes
void printValue(IntClass);
IntClass f(int);

int main() {
    // initialize with an int
    IntClass intObject = 23;
    cout << "The value is " << intObject.getValue() << endl;

    // assign an int
    intObject = 24;
    cout << "The value is " << intObject.getValue() << endl;

    // pass an int to a function expecting IntClass
    cout << "The value is ";
    printValue(25);
    cout << endl;

    // demonstrate conversion on a return
    intObject = f(26);
    cout << "The value is ";
    printValue(intObject);

    return 0;
}