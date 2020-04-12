// program13_14.cpp
// this program demonstrates the seekg function
// the program uses the seekg function to jump around to different locations in the file,
// retrieving a character after each stop.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // variable to acces file
    char ch;

    // open the file for reading
    fstream file("letters.txt", ios::in);
    if (!file) {
        cout << "Error opening file.";
        return 0;
    }

    // get fifth by from beginning of alphabet file
    file.seekg(5L, ios::beg);
    file.get(ch);
    cout << "Byte 5 from beginning: " << ch << endl;

    // get tenth by from end of alphabet file
    file.seekg(-10L, ios::end);
    file.get(ch);
    cout << "Byte 10 from end: " << ch << endl;

    // go forward three bytes from current position
    file.seekg(3L, ios::cur);
    file.get(ch);
    cout << "Byte 3 from current: " << ch << endl;

    // close the file
    file.close();
    return 0;
}