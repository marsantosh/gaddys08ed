// program12_03.cpp
// this program illustrates dynamic allocation
// of storage for C-strings
#include <iostream>
using namespace std;



int main() {
    const int NAME_LENGTH = 50;
    char *pname;

    // allocate the array
    pname = new char[NAME_LENGTH];

    // read a string
    cout << "Enter your name: ";
    cin.getline(pname, NAME_LENGTH);

    // display the string
    cout << "Hello " << pname;
    cout << endl;
    
    return 0;
}