// this pogram uses a two-dimensional array.
// the data stored in the array is read from a file
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];
    double totalSales = 0;
    int div, qtr;
    ifstream datafile;

    datafile.open("files/sales2.dat");
    if (!datafile)
        cout << "Erro opening data file.\n";
    else {
        cout << fixed << showpoint << setprecision(2);
        cout << "Quarterly Sales by Division\n\n";

        // nested loops are used to fill the array with quarterly
        // sales figures for each division and to display the data
        for (div = 0; div < NUM_DIVS; div++) {
            for (qtr = 0; qtr < NUM_QTRS; qtr++) {
                cout << "Division " << (div + 1)
                     << ", Quarter " << (qtr + 1) << " : $ ";
                datafile >> sales[div][qtr];
                cout << sales[div][qtr] << endl;
            }
            cout << endl;
        }
        datafile.close();

        // nested loops are used to add all the elements
        for (div = 0; div < NUM_DIVS; div++) {
            for (qtr = 0; qtr < NUM_QTRS; qtr++)
                totalSales += sales[div][qtr];
        }

        // display the total
        cout << "The total sales for the company are: $ ";
        cout << totalSales << endl;
    }

    return 0;
}