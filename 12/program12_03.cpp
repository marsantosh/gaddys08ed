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

/*
A common mistake when using pointers to char as C-strings is using the pointer when it
does not point to a properly allocated C-string. For example, the code
char *pname;
cout << "Enter your name: ";
cin >> pname;
is erroneous because the program tries to read a string into the memory location pointed to
by pname , when pname has not been properly initialized.
*/
