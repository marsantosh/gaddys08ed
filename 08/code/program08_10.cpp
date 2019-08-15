// this program uses an array to store monthly sales figures
// for a compnay's regional offices. It then finds and displays
// the total, average, highest, and lowest sales amounts
// the data to fill the array is read in from a file
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_OFFICES = 12;
    ifstream dataIn;
    int office;
    double sales[NUM_OFFICES],
           totalSales = 0.0,
           averageSales,
           highestSales,
           lowestSales;
    
    // open the data file
    dataIn.open("files/sales.dat");
    if (!dataIn)
        cout << "Error opening data file.\n";
    else {
        // fill the array with data from the file
        for (office = 0; office < NUM_OFFICES; office++)
            dataIn >> sales[office];
        dataIn.close();

        // sum all the array elements
        for (office = 0; office < NUM_OFFICES; office++)
            totalSales += sales[office];
        
        // calculate average sales
        averageSales = totalSales / NUM_OFFICES;

        // find hihest and lowest sales amounts
        highestSales = lowestSales = sales[0];
        for (office = 1; office < NUM_OFFICES; office++) {
            if (sales[office] > highestSales)
                highestSales = sales[office];
            else if (sales[office] < lowestSales)
                lowestSales = sales[office];
        }

        // display results
        cout << fixed << showpoint << setprecision(2);
        cout << "Total sales   $ " << setw(9) << totalSales << endl;
        cout << "Average sales $ " << setw(9) << averageSales << endl;
        cout << "Highes sales  $ " << setw(9) << highestSales << endl;
        cout << "Lowest sales  $ " << setw(9) << lowestSales << endl;
    }
    return 0;
}