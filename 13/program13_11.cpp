// program13_11.cpp
// this program uses the write and read functions
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    // file object used to access a file
    fstream file("nums.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file.";
        return 0;
    }

    // integer data to write to binary file
    int buffer[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(buffer) / sizeof(buffer[0]);

    // write the data and close the file
    cout << "Now writing the data to the file.\n";
    file.write(reinterpret_cast<char *>(buffer), sizeof(buffer));
    file.close();

    // open the file and use a binary read to read contents fo the file into
    // an array
    file.open("nums.dat", ios::in);
    if (!file) {
        cout << "Error opening file." << endl;
        return 0;
    }

    cout << "Now reading the data back into memory. " << endl;
    file.read(reinterpret_cast<char *>(buffer), sizeof(buffer));

    // write out the array entries
    for (int count = 0; count < size; count++) {
        cout << buffer[count] << " ";
    }
    cout << endl;

    // close the file
    file.close();
    return 0;
}