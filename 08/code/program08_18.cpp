// this program passes an array filled with sales data
// to functions wich find and return its total, highest,
// and lowest values. The functions should not change the
// array, so they each use a const array parameter.
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
double sumArray(const double[], int);
double getHighest(const double[], int);
double getLowest(const double[], int);

int main() {
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS],
           total,
           average,
           highest,
           lowest;
    
    // get the sales data
    cout << "Enter the sales for this week.\n";
    for (int day = 0; day < NUM_DAYS; day++) {
        cout << "Day " << (day + 1) << ": ";
        cin  >> sales[day];
    }

    // get the totals ales and compute average sales
    total = sumArray(sales, NUM_DAYS);
    average = total / NUM_DAYS;

    //get highest and lowest sales amounts
    highest = getHighest(sales, NUM_DAYS);
    lowest = getLowest(sales, NUM_DAYS);

    // display result
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The total sales are         $ "
         << setw(9) << total << endl;
    cout << "The average sales amount is $ "
         << setw(9) << average << endl;
    cout << "The highest sales amount is $ "
         << setw(9) << highest << endl;
    cout << "The lowest sales amunt is   $ "
         << setw(9) << lowest << endl;
    return 0;
}

/**
 *              sumArray
 * This function computes and returns the sum of the values
 * in the array whose afress is passed to it
 */
double sumArray(const double array[], int size) {
    double total = 0.0;
    for (int count = 0; count < size; count++)
        total += array[count];
    return total;
}

/**
 *              getHighest
 * this function finds and returns the alrgest value
 * in the array whose address is passed to it
 */
double getHighest(const double array[], int size) {
    double highest = array[0];
    for (int count = 0; count < size; count++) {
        if (array[count] > highest)
            highest = array[count];
    }
    return highest;
}

/**
 *              getLowest
 * this function finds and returns the smallest value
 * in the array whose adress is passed to it.
 */
double getLowest(const double array[], int size) {
    double lowest = array[0];
    for (int count = 1; count < size; count++) {
        if (array[count] < lowest)
            lowest = array[count];
    }
    return lowest;
}
