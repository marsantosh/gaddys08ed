// program13_16.cpp
// this program demonstrates the tellg function
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    // variables sued to read the file
    long offset;
    char ch;
    char response;

    // create the file object and open the file
    fstream file("letters.txt", ios::in);
    if (!file) {
        cout << "Error opening file.";
        return 0;
    }

    // work with the file
    do {
        // where in the file am I?
        cout << "Currently at position " << file.tellg() << endl;

        // get a file offset from the user
        cout << "Enter an offset from the beginning of the file: ";
        cin >> offset;

        // read the character at the given offset
        file.seekg(offset, ios::beg);
        file.get(ch);

        cout << "Character read: " << ch << endl;
        cout << "Do it again? ";
        cin >> response;
    } while (tolower(response) == 'y');
    file.close();
    return 0;
}