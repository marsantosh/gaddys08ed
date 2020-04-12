// program13_10.cpp
// program ahows how to rewind a file. It writes a 
// text file and opens it for reading, then rewinds it to
// the beginning and reads it again
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // variables needed to read or write file one
    // character at a time
    char ch;
    fstream ioFile("rewind.txt", ios::out);

    // open file
    if (!ioFile) {
        cout << "Error in trying to create a file" << endl;
        return 0;
    }

    // write to file and close
    ioFile << "All good dogs " << endl
           << "growl, bark and eat. " << endl;
    ioFile.close();

    // open the file
    ioFile.open("rewind.txt", ios::in);
    if (!ioFile) {
        cout << "Error in trying to open file." << endl;
        return 0;
    }

    // read the file and echo to screen
    ioFile.get(ch);
    while (!ioFile.fail()) {
        cout.put(ch);
        ioFile.get(ch);
    }

    // rewind the file
    ioFile.clear();
    ioFile.seekg(0, ios::beg);

    // read file again and echo screen
    ioFile.get(ch);
    while (!ioFile.fail()) {
        cout.put(ch);
        ioFile.get(ch);
    }

    return 0;
}