// this program uses a loop to write multiple values to a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // vars and objects
    ofstream outputFile;
    int numberOfDays;
    double sales;

    // get number of days
    cout << "For how many days do you have sales? ";
    cin >> numberOfDays;

    // open the output file
    outputFile.open("Sales.txt");

    // loop once for each day of sales
    for (int count = 1; count <= numberOfDays; count++) {

        // get the sales amount for a day
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;

        // write the sales amount to the file
        outputFile << sales << endl;
    }

    // close the file
    outputFile.close();

    cout << "Data written to Sales.txt\n";
    return 0;
}