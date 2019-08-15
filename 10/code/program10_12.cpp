// this program demonstrates that a pointer may be used as a
// parameter to accept the address of an array. Either subscript
// or pointer notation may be used
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void getSales(double *sales, int size);
double totalSales(double *sales, int size);

int main() {
    const int QUARTERS = 4;
    double sales[QUARTERS];

    getSales(sales, QUARTERS);
    cout << setprecision(2);
    cout << fixed << showpoint;
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QUARTERS) << endl;
    return 0;
}

/*********************************************************
 *                      getSales
 * this function uses a pointer to accept the address of an array of
 * doubes. The number of elements in the array is passed as a separate
 * integer parameter. The fuction asks the yser to enter the sales figures
 * for four quarters, then stores those figures in the array using
 * subscript notation.
 **********************************************************/
void getSales(double *array, int size) {
    for (int count = 0; count < size; count++) {
        cout << "Enter the sales figure for quarter ";
        cout << (count + 1) << ": ";
        cin >> array[count];
    }
}

//                      totalSales
/*
 * this function uses a pointer to accept the address
 * of an arrya of doubles whose size is passed as a 
 * separate parameter. The function ueses pointer notation to sum the elements
 * of the array.
 */
double totalSales(double *array, int size) {
    double sum = 0.0;

    for (int count = 0; count < size; count++) {
        sum += *array;
        array++;
    }
    return sum;
}