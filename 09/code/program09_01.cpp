// this program demonstrates the searchList function
// which performs a linear search on an integer array
#include <iostream>
using namespace std;

int linearSearch(const int [], int, int);

const int SIZE = 10;

int main() {
    int tests[SIZE] = { 87, 75, 98, 82, 45, 67, 56, 100, 23, 67 };
    int results;

    // search the array for the value 100
    results = linearSearch(tests, SIZE, 100);

    // if searchList returned -1, 100 was not found
    if (results == -1)
        cout << "You did not earn 100 points on any test.\n";
    else {
        // otherwise results contains the subscript of
        // the first 100 found in the array
        cout << "You earned 100 on test ";
        cout << (results + 1) << ".\n";
    }
    return 0;
}

/*                  linearSearch                 */
int linearSearch(const int list[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (list[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}