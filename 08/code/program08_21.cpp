// this program stores and displays theater seat rpices
// It demonstrates how to pass a 3-dimensional array to a function.
// the data is read in from a file
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_SECTIONS = 3,
          ROWS_IN_SECTION = 5,
          SEATS_IN_ROW = 6;

typedef double seatTable[][ROWS_IN_SECTION][SEATS_IN_ROW];

// function prototypes
void fillArray(seatTable);
void showArray(const seatTable);

int main() {
    // define 3-d array to hold sear prices
    double seats[NUM_SECTIONS][ROWS_IN_SECTION][SEATS_IN_ROW];

    fillArray(seats);
    showArray(seats);
    return 0;
}

/**
 *                  fillArray
 * This function receives the address of a 3-D array
 * and fills it with data read in from a file.
 */
void fillArray(seatTable array) {
    ifstream dataIn;
    dataIn.open("files/seats.dat");

    if (!dataIn)
        cout << "Error opening file.\n";
    else {
        for (int section = 0; section < NUM_SECTIONS; section++) {
            for (int row = 0; row < ROWS_IN_SECTION; row++) {
                for (int seat = 0; seat < SEATS_IN_ROW; seat++)
                    dataIn >> array[section][row][seat];
            }
        }
        dataIn.close();
    }
}

/**
 *                     showArray
 * 
 */
void showArray(const seatTable array) {
    cout << fixed << showpoint << setprecision(2);

    for (int section = 0; section < NUM_SECTIONS; section++) {
        cout << "\n\nSection" << (section + 1);
        for (int row = 0; row < ROWS_IN_SECTION; row++) {
            cout << "\nRow " << (row + 1) << ": ";
            for (int seat = 0; seat < SEATS_IN_ROW; seat++)
                cout << setw(7) << array[section][row][seat];
        }
    }
    cout << endl;
}