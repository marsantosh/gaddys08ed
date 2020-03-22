// program13_06.cpp
// this program uses the getline function to read
// a line of information from the file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
    // varialbes needed for file input
    fstream nameFile;
    string input;

    // open the file
    nameFile.open("murphy.txt", ios::in);
    if (!nameFile) {
        cout << "File open error!" << endl;
        return 0;
    }

    // read first line of the file
    getline(nameFile, input);
    while (nameFile) {
        // if successful, print line and read anotther line
        cout << input << endl;
        getline(nameFile, input);
    }

    // close the file
    nameFile.close();
    return 0;
}