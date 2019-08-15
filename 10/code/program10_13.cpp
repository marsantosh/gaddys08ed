// this program demonstrates a pointer to const
// parameter
#include <iostream>
using namespace std;

void displayValues(const int *numbers, int size);

int main() {
    // array sizes
    const int SIZE_1 = 6;
    const int SIZE_2 = 7;
    // define an array of const ints
    const int array1[SIZE_1] = { 1, 2, 3, 4, 5, 6 };

    // define an array of non-const ints
    int array2[SIZE_2] = { 2, 4, 6, 8, 10, 12, 14 };

    // dusplay the ontents of the const array
    displayValues(array1, SIZE_1);
    
    // display the contents of the non-const array
    displayValues(array2, SIZE_2);
    return 0;
}

//                      displayValues
void displayValues(const int *numbers, int size) {
    // display all the values
    for (int count = 0; count < size; count++) {
        cout << *(numbers + count) << "  ";
    }
    cout << endl;
}