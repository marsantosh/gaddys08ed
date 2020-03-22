// program13_07.cpp
// this file demonstrates the getline function with a 
// user-specified delimeter.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // variable needed to read file
    string input;

    // open the file
    fstream dataFile("addresses.txt", ios::in);
    if (!dataFile) {
        cout << "Error opening file.";
        return 0;
    }

    // read lines terminated by '$' sign and output
    getline(dataFile, input, '$');
    while (!dataFile.fail()) {
        cout << input << endl;
        getline(dataFile, input, '$');
    }

    // close the file
    dataFile.close();
    return 0;
}