// program13_05.cpp
// this program shows the behaviour of the >> operator on files
// that contain spaces as part of the information.
// the program reasd the contents of the file and transfers
// those contents to standard output
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    // variables needed to read file
    fstream file;
    string input;

    // open the file
    file.open("murphy.txt", ios::in);
    if (!file) {
        cout << "File open error!" << endl;
        return 0;
    }

    // read the file and echo to screen
    file >> input;
    while (!file.fail()) {
        cout << input;
        file >> input;
    }

    // close the file
    file.close();
    cout << endl;

    return 0;
}


/*
One way to get around the problem in Program 13-5 is to use a function that reads an
entire line of text. There is a global function that is part of the string library that you can
use for this purpose:
istream& getline (istream& is, string& str, char delim = ‘\n’);
This function reads a line of text from a stream is and stores it into a string variable
str . The function has an optional parameter delim that marks the end of the line to be
read. The delimiting character is removed from the stream and discarded. If getline
is called without the third parameter, the delimiter is assumed to be the end of line
character ‘\n’ .
*/
