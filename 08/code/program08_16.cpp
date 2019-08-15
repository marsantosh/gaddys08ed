// this program demonstrates passing different arrays to a function
#include <iostream>
using namespace std;

// declare arrayType to be an alias for an array of ints
typedef int arrayType[];

void showValues(arrayType, int);

int main() {
    const int SIZE1 = 8;
    const int SIZE2 = 5;
    int set1[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[] = {2, 4, 6, 8, 10};

    cout << "Here are the values stored in arrays set1: ";
    showValues(set1, SIZE1);

    cout << "Here are the values stoed in array set2: ";
    showValues(set2, SIZE2);
    return 0;
}

/**
 *                      showValues
 * This function fisplays the contents of an integer array
 * when passed the array's addrss and its size as arguments.
 */
void showValues(arrayType nums, int size) {
    for (int index = 0; index < size; index++)
        cout << nums[index] << "  ";
    cout << endl;
}