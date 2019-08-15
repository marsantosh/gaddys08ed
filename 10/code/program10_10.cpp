// this program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of
// pointers
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int set[ ] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPointer = set;

    cout << "The numbers in set are:\n";
    cout << *numPointer << " ";

    while (numPointer < &set[SIZE - 1]) {
        // advance numPointer to the next element
        numPointer++;

        // display the valie pointed to by numPointer
        cout << *numPointer << " ";
    }

    // display the numbers in reverse order
    cout << "\nThe numbers in set backwards are:\n";
    cout << *numPointer << " ";
    while (numPointer > set) {
        // nive backward to the previous element
        numPointer--;

        // display the value pointed to by numPointer
        cout << *numPointer << " ";
    }
    cout << endl;
    return 0;
}