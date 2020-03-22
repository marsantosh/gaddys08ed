// program13_01.cpp
// this program demonstrates reading and writing a file
// through an fstream object
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    fstream inOutFile;
    string word;

    // open the file
    inOutFile.open("inout.txt");
    if (inOutFile.fail()) {
        cout << "The file was not found." << endl;
        return 1;
    }

    // read and print every word already in the file
    while (inOutFile >> word) {
        cout << word << endl;
    }

    // clear end of file flag ot allow additional file operations
    inOutFile.clear();

    // write a word to tje file and close the file
    inOutFile << "\nHello" << endl;
    inOutFile.close();

    return 0;
}