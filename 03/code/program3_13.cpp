#include <iostream>
using namespace std;

int main() {
    int begInv,
        sold,
        store1,
        store2;
    
    // get the beginning inventory for the two stores
    cout << "One week ago, 2 new widget stores opened" << endl;
    cout << "at the same time with the same beginning" << endl;
    cout << "inventory. What was the beggining inventory?:  ";
    cin >> begInv;

    // set each store's inventory
    store1 = store2 = begInv;

    // get  the number of widgets sold at each store
    cout << "how many widgets has store 1 sold?: ";
    cin >> sold;
    store1 -= sold;

    cout << "How many widgets has store 2 sold? ";
    cin >> sold;
    store2 -= sold;

    // display each store's current inventory
    cout << "\nThe current inventory of each store:" << endl;
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    return 0;
}