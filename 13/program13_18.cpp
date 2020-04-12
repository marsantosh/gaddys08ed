// program13_18.cpp
// this program displays the contents of the inventory file
#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;

// declaration of Invtry structure
struct Invtry {
    char desc[DESC_SIZE];
    int qty;
    double price;
};


int main() {
    // buffer used for reading
    Invtry record;

    // create and open the file for reading
    fstream inventory("invtry.dat", ios::in | ios::binary);
    if (!inventory) {
        cout << "Error in opening the file.";
        return 0;
    }

    // now read and display the records
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    while (!inventory.eof()) {
        cout << "Description: ";
        cout << record.desc << endl;

        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;

        inventory.read(reinterpret_cast<char * >(&record), sizeof(record));
    }

    inventory.close();
    return 0;
}