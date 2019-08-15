// this program totals and averages the sales figures for
// any numver of days. The figures are stored in a dynamically
// allocated array
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double *sales, total = 0.0, average;
    int numDays;

    // get numbe of days of sales
    cout << "How many days of sales figures do you wish ";
    cout << "to process? ";
    cin >> numDays;

    // dynamically allocate an array large enough
    // to hold that many days of sales amounts
    sales = new double[numDays];

    // get the sales figures for each day
    cout << "Enter the sales figures below.\n";
    for (int count = 0; count < numDays; count++) {
        cout << "Day " << (count + 1) << ":" ;
        cin >> sales[count];
    }

    // calculate the totals ales
    for (int count = 0; count < numDays; count++) {
        total += sales[count];
    }

    // calculate the average sakes per day
    average = total / numDays;

    // display the results
    cout << setprecision(2) << fixed << showpoint;
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average sales: $" << average << endl;

    // free dybamically allocated memory
    delete [] sales;
    sales = 0;
    return 0;
}