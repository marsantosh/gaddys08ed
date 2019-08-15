// this program uses a function to double the value of
// each element of an array
/**
 * 
 * N O T E :
 * In C++ when a regular variable is passed to a function and an & precedes its name,
 * it means that the function is receiving a reference to the memory address where a
 * variable is stored. An array name, however, is already a memory address.
 * That is, instead of holding a value, it holds the starting address of where the
 * array is located in memory. Therefore, an & should not be used with it.
 */
#include <iostream>
using namespace std;

// declare arrayType t be an alias of an array of nts
typedef int arrayType[];

// fuction prototypes
void doubleArray(arrayType, int);
void showValues(arrayType, int);

int main() {
    const int ARRAY_SIZE = 7;
    arrayType set = {1, 2, 3, 4, 5, 6, 7};

    // display the original values
    cout << "The arrays values are:\n";
    showValues(set, ARRAY_SIZE);

    // double the values in the array
    doubleArray(set, ARRAY_SIZE);

    // display the new values
    cout << "\nAfter calling doubleArray, the values are:\n";
    showValues(set, ARRAY_SIZE);
    cout << endl;
    return 0;
}

/**
 *                doubleArray
 * This function doubles the value of each element
 * in the array whose address is passed to it.
 */
void doubleArray(arrayType nums, int size) {
    for (int index = 0; index < size; index++)
        nums[index] *= 2;
}

/**
 *                  showValues
 * this function displays the contents of an int array
 * when àssed the array's address and size as arguments
 */
void showValues(arrayType nums, int size) {
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
