// program13_04.cpp
// this program demonsrates the return value of the stream
// object error testing member functions
#include <iostream>
#include <fstream>
using namespace std;


// function prototype
void showState(fstream &);

int main() {
    // open a file, write a number nad hsow file status
    fstream testFile("stuff.dat", ios::out);
    if (testFile.fail()) {
        cout << "cannot open the file.\n";
        return 0;
    }

    int num = 10;
    cout << "Writing to the file.\n";
    testFile << num;
    showState(testFile);
    testFile.close();

    // open the same file, read the number, show status
    testFile.open("stuff.dat", ios::in);
    if (testFile.fail()) {
        cout << "cannot open the file.\n";
        return 0;
    }

    cout << "Reading from the file.\n";
    testFile >> num;
    showState(testFile);

    // atempt an invalid read, and show status
    cout << "Forcing a bad read operation.\n";
    testFile >> num;
    showState(testFile);

    // close file and quit
    testFile.close();
    return 0;
}


/*
 * definition of function showState.
 * this function uses an fstream reference as its parameter.
 * the return values of the eof(), fail(), bad() and good() member
 * functions is displayed. The clear() function is called before the
 * function returns.
 */
void showState(fstream &file) {
    cout << "File Status:\n";
    cout << "  eof bit: " << file.eof() << endl;
    cout << " fail bit: " << file.fail() << endl;
    cout << "  bad bit: " << file.bad() << endl;
    cout << " good bit: " << file.good() << endl;
    
    file.clear();
}