// this program demonstrates the use of overloaded constructors
#include <iostream>
#include <iomanip>
using namespace std;

// sale class declaration
class Sale {

    private:
        double taxRate;
    
    public:
        Sale(double rate) {
            taxRate = rate;
        }

        Sale() {
            taxRate = 0.0;
        }

        double calcSaleTotal(double cost) {
            double total = cost + cost * taxRate;
            return total;
        }
};


// main
int main() {
    Sale cashier1(0.06);
    Sale cashier2;

    // format the output
    cout << fixed << showpoint << setprecision(2);

    // get and display the total sale price for two $24.95 sales
    cout << "With a 0.06 sales tax rate, the total\n";
    cout << "of the $24.95 sales is $ ";
    cout << cashier1.calcSaleTotal(24.95) << endl;

    cout << "\nOn a tax-exempt purchase, the total\n";
    cout << "of the $24.95 sale is, of course, $ ";
    cout << cashier2.calcSaleTotal(24.95) << endl;
    return 0;
}