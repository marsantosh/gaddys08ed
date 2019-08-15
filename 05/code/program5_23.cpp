// this program tests for file open errors
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile;
    string filename;
    int number;

    // get he filename from the user
    cout << "Enter the filename:  ";
    cin >> filename;

    // attempt to open the input file
    inputFile.open(filename.c_str());

    // if the file successfully opened, process it
    if (inputFile) {

        // read the nubmbers form the file and display them
        while (inputFile >> number) {
            cout << number << endl;
        }

        // close the file
        inputFile.close();
    }
    else {
        // display an error message
        cout << "Error opening the file.\n";
    }
    return 0;
}