// this program uses subscript notation with a pointer
// variable and pointer notation with an array name
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double* doublePointer;

    // assign the address of the coins array to doublePointer
    doublePointer = coins;

    // display the contents of the coins array
    // use subscripts with the pointer
    cout << setprecision(2);
    cout << "Here are the values in the coins array:\n";
    for (int count = 0; count < NUM_COINS; count++)
        cout << doublePointer[count] << " ";
    
    // display the contents of the coins array again
    // but this time use pointer notation with the array name
    cout << "\nAnd here thet are again:\n";
    for (int count = 0; count < NUM_COINS; count++)
        cout << *(coins + count) << " ";
    cout << endl;
    return 0;
}