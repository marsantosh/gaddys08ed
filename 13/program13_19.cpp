// program13_19.cpp
// this program allows the user to edit a specific
// record in the inventory file.
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
    // variables needed to read the file
    Invtry record;
    long recNum;

    // open the file
    fstream inventory("invtry.dat", ios::in | ios::out | ios::binary);

    if (!inventory) {
        cout << "Error opening file." << endl;
        return 0;
    }

    // move to the desired record and read it into record
    cout << "Which record do you want to edit? ";
    cin >> recNum;
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // get new data from user and edit in-memory record
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: " << endl;
    cout << "Price: ";
    cout << record.price << endl;
    cout << "Enter the enw data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // move to the right place in file and write the record
    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    // close the file
    inventory.close();
    return 0;
}