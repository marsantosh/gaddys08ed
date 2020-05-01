// program16_11.cpp
// this program v¡demonstrates the SimpleVector template
#include <iostream>
#include "SimpleVector.h"
using namespace std;


int main() {
    const int SIZE = 10;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    // store values in the arrays
    for (int x = 0; x < SIZE; x++) {
        intTable[x] = (x * 2);
        doubleTable[x] = (x * 2.14);
    }

    // display the values un the arrays
    cout << "These values are in intTable: " << endl;
    intTable.print();
    cout << "These values are in doubleTable: " << endl;
    doubleTable.print();

    // use the built-in + operator on array elements
    cout << "Using + operator on the array elements..." << endl;
    for (int x = 0; x < SIZE; x++) {
        intTable[x] = intTable[x] + 5;
        doubleTable[x] = doubleTable[x] + 1.5;
    }

    // display the values in the array
    cout << "These values are in intTable: " << endl;
    intTable.print();
    cout << "There values are in doubleTable: " << endl;
    doubleTable.print();

    // use the built-in ++ operator on array elements
    cout << "Using ++ operator on the arraye elements..." << endl;
    for (int x = 0; x < SIZE; x++) {
        intTable[x]++;
        doubleTable[x]++;
    }

    // display the values in the array
    cout << "There values are in intTable: " << endl;
    intTable.print();
    cout << "These values are in the dobuleTable: " << endl;
    doubleTable.print();
    cout << endl;
    return 0;


}