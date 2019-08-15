// this program uses a pointer to display
// the contents of an array
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int set[ ] = {5, 10, 15, 20, 25, 30, 35, 40};
    int* numPointer;

    // make numPointer to the set array
    numPointer = set;

    // use the pointer to display the array elements
    cout << "The numbers in set are:\n";
    for (int index = 0; index < SIZE; index++) {
        cout << *numPointer << " ";
        numPointer++;
    }

    // display the array elements in reverse order
    cout << "\nThe numbers in set backwards are:\n";
    for (int index = 0; index < SIZE; index++) {
        numPointer--;
        cout << *numPointer << " ";
    }
    cout << endl;
    return 0;
}