// this program demonstrates how to pass
// a two-dimensional array to a function
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

// function prototype
/**
 * C++ requires the columns to be specified in the function prototype
 * and header because of the way two-dimensional arrays are stored in memory.
 * One row actually follows another.
 * When the compiler generates code for accessing the elements of a two-dimensional array,
 * it needs to know how many bytes separate the rows in memory.
 * The number of columns is a critical factor in this calculation.
 */
void showArray(const int [][NUM_COLS], int);

int main() {
    int table1[TBL1_ROWS][NUM_COLS] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    int table2[TBL2_ROWS][NUM_COLS] = {
        { 10, 20, 30, 40 },
        { 50, 60, 70, 80 },
        { 90, 100, 110, 120 },
        {130, 140, 150, 160 }
    };

    cout << "The contents of table1 are: \n";
    showArray(table1, TBL1_ROWS);
    cout << "\nThe contents of table2 are: \n";
    showArray(table2, TBL2_ROWS);
    return 0;
}

/**
 *                  showArray
 * this function displays the contents of a 2-D integer array.
 * Its first parameter receives the address of the array, which
 * has NUM_COLS columns. The second parameter receives the number
 * of rows in the array.
 */
void showArray(int const array[][NUM_COLS], int numRows) {
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < NUM_COLS; col++)
            cout << setw(5)  << array[row][col] << " ";
        cout << endl;
    }
}