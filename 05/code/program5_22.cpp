// this program tests for file open errors
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;

    // attempt to open the input file
    inputFile.open("ListOfNumbers.txt");

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