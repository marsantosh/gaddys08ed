// this program uses a partially-filled array to store monthly sales
// figures for a set of offices. It the finds and displays the total
// sales amount, the average sales amount, and a listening of the offices
// with sales below the average. The data tofill the array is read in from
// a file and the number of data values are counted
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 20;
    ifstream dataIn;
    int    numOffices,
           count;
    double sales[SIZE],
           totalSales = 0.0,
           averageSales;
    
    // open the data file
    dataIn.open("files/sales.dat");
    if (!dataIn)
        cout << "Error opening the data file.\n";
    else {
        // read values form the file and store them in the array
        // counting them and summing them as they are read in
        count = 0;
        while (count < SIZE && dataIn >> sales[count]) {
            totalSales += sales[count];
            count++;
        }
        numOffices = count;
        dataIn.close();

        // calculate average sales
        averageSales = totalSales / numOffices;

        // display total and average
        cout << fixed << showpoint << setprecision(2);
        cout << "Total salesa are      $ "
             << setw(9) << totalSales << endl;
        cout << "The average sales are $ " << setw(9)
             << averageSales << endl;
        
        // display figures for offices performing below the average
        cout << "\nThe following offices have below-average "
             << "sales figures.\n";
        
        // display figures for offices performing below the average
        cout << "\nThe following ffices have below-average "
             << "sales figures.\n";
        
        for (int office = 0; office < numOffices; office++) {
            if (sales[office] < averageSales)
                cout << "Office " << setw(2) << (office + 1)
                     << " $ " << sales[office] << endl;
        }
    }
    return 0;
}