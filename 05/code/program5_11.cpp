// this program takes daily sales figures over a period of time
// and calculates their total. It then uses this total to compute
// the average daily sales
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // vars
    int numDays;
    double dailySales,
           totalSales = 0.0,
           averageSales;
    
    // get the number of days
    cout << "For how many days do you have sales figures? ";
    cin >> numDays;

    // get the sales for each day and accumulate a total
    for (int day = 1; day <= numDays; day++) {
        cout << "Enter the sales for day " << day << ": ";
        cin >> dailySales;
        totalSales += dailySales;
    }

    // compute the average dailySales
    averageSales = totalSales / numDays;

    // display the total sales and avraga daily sales
    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal saleS:         $" << setw(8) << totalSales;
    cout << "\nAverage daily saleS: $" << setw(8) << averageSales
         << endl;
    return 0;
}