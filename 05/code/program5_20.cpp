// this program uses a loop to read in multiple
// values from a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // vars
    ifstream inputFile;
    int numberOfDays;
    double sales,
           totalSales = 0.0;
    
    // get the number of days
    cout << "How many days of sales data are stored in your file? ";
    cin >> numberOfDays;

    // open the input file
    inputFile.open("Sales.txt");

    // loop once for each piece of data to be read from the file
    for (int count = 1; count <= numberOfDays; count++) {

        // read a sales figure from the file and add it to the sum
        inputFile >> sales;
        totalSales += sales;
    }

    // close the file
    inputFile.close();
    cout << "Total sales for the " << numberOfDays << " days were $" << totalSales;
    cout << endl;
    return 0;
}