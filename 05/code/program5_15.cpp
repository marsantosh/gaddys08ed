#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // vars
    int numDVDs;
    double total =  0.0;
    char current;

    // get number of DVDs rented
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;

    // determine the charges
    for (int dvdCount = 1; dvdCount <=  numDVDs; dvdCount++) {
        if (dvdCount % 3 == 0) {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue;
        }
        cout << "Is DVD #" << dvdCount << " a current release (Y/N)? ";
        cin >> current;
        if ((current == 'Y') || (current == 'y'))
            total += 3.50;
        else
            total += 2.50;
    }

    // display the total charges
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;

    return 0;
}