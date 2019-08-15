// this program us used by GDL to compute the
// number of cubic yards of mulch a customer needs and its price
#include <iostream>
#include <iomanip>
using namespace std;

const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
    double squareFeet;
    int depth;
    double cubicFeet,
           cubicYards,
           totalPrice;
    
    // get inputs
    cout << "number of square feet to be convered with mulch: ";
    cin >> squareFeet;
    cout << "number of inches deep: ";
    cin >> depth;

    // perform calculations
    cubicFeet = squareFeet * (depth / 12.0);
    cubicYards = cubicFeet / 27;
    totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

    // display outputs
    cout << "\nNumber of cubic tards needed: " << cubicYards << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Price per cubic yard: $" << setw(7)
         << PRICE_PER_CUBIC_YD << endl;
    cout << "Total price:          $" << setw(7)
         << totalPrice << endl;
    return 0;
}