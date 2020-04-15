// recursive_bsearch.cpp
// this program demonstrates a recursive function that
// performs a binary seach on an integer array
#include <iostream>
using namespace std;

// function prototype
int binarySearch(const int [], int, int, int);

const int SIZE = 20;


int main() {
    int tests[SIZE] = {
        101, 142, 189, 199, 207, 222,
        234, 387, 456, 210, 319, 388,
        394, 417, 429, 447, 521, 536,
        600, 630
    };

    int result; // result of the search
    int empID;

    cout << "Enter the EMployee ID you wish to search for: ";
    cin >> empID;
    result = binarySearch(tests, 0, SIZE - 1, empID);
    if (result == -1) {
        cout << "That number does not exist in the array." << endl;
    }
    else {
        cout << "That ID is found at element [" << result;
        cout << "] in the array." << endl;
    }
    return 0;
}


/*
 * binary search function performs a recursive binary
 * search on a range of elements of an integer array.
 * The parameter first holds the subscript of the range's
 * starting element, and last holds the subscript of
 * the range's last element. The parameter value holds the
 * search value. If the search value is found, it's
 * array subscript is returned. Otherwise, -1 is returned
 * indicating the value was not in the array.
 */
int binarySearch(const int array[], int first, int last, int value) {
    int middle;

    if (first > last) {
        return -1;
    }

    middle = (first + last) / 2;
    if (array[middle] == value) {
        return middle;
    }
    if (array[middle] < value) {
        return binarySearch(array, middle + 1, last, value);
    }
    else {
        return binarySearch(array, first, middle - 1, value);
    }
}