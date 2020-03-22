// program13_03.cpp
// this program demonstrates input and output of numbers
// using the octal, decimal and hexadecimal nubmer systems
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int a, b;
    // read two decimals and print hex and octal equivalents
    cout << "Enter two decimal numbers: ";
    cin >> a >> b;
    cout << "The numbers in decimal: " << a << "\t" << b << endl;
    cout << "The numbers in hexadecimal: " << hex
         << showbase << a << '\t' << b << endl;
    cout << "The numbers in octal: " << oct << a << '\t' << b << endl;

    // read some hexadecimals and print their decimal equivalents
    cout << "Enter two hexadecimal numbers: ";
    cin >> hex >> a >> b;
    cout << "You entered decimal " << dec << a << '\t' << b << endl;

    // read some cotals and print their decimal equivalents
    cout << "Enter two octal numbers: ";
    cin >> oct >> a >> b;
    cout << "You entered decimal " << dec << a << '\t' << b << endl;

    return 0;
}

/*
Recall that when a program writes data to an open file, the data does not go directly to
the file. Instead, the data is stored in an output buffer associated with the file and is
later transferred to the file in a process known as flushing the buffer. Usually the buffer
is only flushed if it is full or when the file is closed. The endl and flush manipulators
allow the programmer to flush the buffer at any time, hence forcing transfer of
buffered data to the file.
*/
