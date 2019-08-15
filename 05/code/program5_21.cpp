// this program uses a loop to read in values
// from a file until the end of file is reached
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // vars
    ifstream inputFile;
    int numberOfDays = 0;
    double sales,
    totalSales = 0.0;

    // open the input file
    inputFile.open("Sales.txt");

    // loop until the EOF is reached
    while (inputFile >> sales) {
        totalSales += sales;
        numberOfDays++;
    }

    // close the file
    inputFile.close();

    cout << "Total sales for the " << numberOfDays << " days were $" << totalSales;
    cout << endl;

    return 0;
}