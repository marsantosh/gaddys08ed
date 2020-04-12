// program13_09.cpp
// this program demonstrates the peek member function
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // variables needed to read characters and numbers
    char ch;
    int number;

    // variables for file handling
    string fileName;
    fstream inFile, outFile;

    // open tje file to be modified
    cout << "Enter a file name: ";
    cin >> fileName;
    inFile.open(fileName.c_str(), ios::in);

    if (!inFile) {
        cout << "Cannot open file " << fileName;
        return 1;
    }

    // open the file to receive the modified copy
    outFile.open("modified.txt", ios::out);

    if (!outFile) {
        cout << "Cannot open the output file.";
        return 2;
    }

    // copy the file one character at a time
    // except numbers  in the input file must have 1 added to them

    // peek at th first character
    ch = inFile.peek();

    while (ch != EOF) {
        // examine current character
        if (isdigit(ch)) {
            // numbers should be read with >>
            inFile >> number;
            outFile << number + 1;
        }
        else {
            // just a simple character, read it and copy it
            ch = inFile.get();
            outFile << ch;
        }
        // peek at the next character from input file
        ch = inFile.peek();
    }

    // close the files
    inFile.close();
    outFile.close();

    return 0;
}