// this program uses the agress of each element in the array
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double* doublePointer;

    // use the pointer to display the values in the array
    cout << setprecision(2);
    cout << "Here are the values in the coins array:\n";
    for (int count = 0; count < NUM_COINS; count++) {
        doublePointer = &coins[count];
        cout << *doublePointer << " ";
    }

    cout << endl;
    return 0;
}