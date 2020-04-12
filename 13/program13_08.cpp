// program13_08.cpp
// this program demosntratates the us eof the get member
// functions of the istream class
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // variables needed to read file one character at a time
    string fileName;
    fstream file;
    char ch;

    // get the file name and open file
    cout << "Enter a file name: ";
    cin >> fileName;

    file.open(fileName.c_str(), ios::in);
    if (!file) {
        cout << fileName << " could not be opened.\n";
        return 1;
    }

    // read file one character at a time and echo to screen
    ch = file.get();
    while (ch != EOF) {
        cout << ch;
        ch = file.get();
    }

    // close file
    file.close();
    return 0;
}

/*
Program 13-8 will display the contents of any file. Because the get function does not skip
whitespaces, all the characters will be shown exactly as they appear in the file.
*/
