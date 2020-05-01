// program16_12.cpp
// this program demonstrates the SearchableVector template
#include <iostream>
#include "SearchVect.h"
using namespace std;


int main() {
    const int SIZE = 10;
    SearchableVector<int> intTable(SIZE);
    SearchableVector<double> doubleTable(SIZE);

    // store values in the vectors
    for (int x = 0; x < SIZE; x++) {
        intTable[x] = (x * 2);
        doubleTable[x] = (x * 2.14);
    }

    // display the valies in the vectors
    cout << "These values are in the intTable: " << endl;
    for (int x = 0; x < SIZE; x++) {
        cout << intTable[x] << " ";
    }
    cout << endl;
    cout << "These values are in doubleTable: " << endl;
    for (int x = 0; x < SIZE; x++) {
        cout << doubleTable[x] << " ";
    }
    cout << endl;

    // now search for values in the vectors
    int result;
    cout << "Searching for 6 in intTable. " << endl;
    result = intTable.findItem(6);
    if (result == -1) {
        cout << "6 was not found int intTable." << endl;
    }
    else {
        cout << "6 was found at subscript " << result << endl;
    }

    cout << "Searching for 12.84 in doubleTable. " << endl;
    result = doubleTable.findItem(12.84);
    if (result == -1) {
        cout << "12.84 was not found in doubleTable." << endl;
    }
    else {
        cout << "12.84 was found at subscript " << result << endl;
    }

    return 0;
}

/*
 *
    The SearchableVector class demonstrates that a class template may be derived from
    another class template. In addition, class templates may be derived from ordinary classes,
    and ordinary classes may be derived from class templates.
 */
