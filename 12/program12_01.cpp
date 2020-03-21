// program12_01.cpp
// this program demonstrates that string literals
// are pointers to char.
#include <iostream>
#include "int_ptr.h"
using namespace std;

int main() {
    // define variables that are pointers to char
    const char *p, *q;

    // assign string literals to the poitners to char
    p = "Hello ";
    q = "Bailey";

    // print the pointers as C-strings
    cout << p << q << endl;

    // print the pointers as C-strings and as addresses
    cout << p << " is stored at " << intptr_t(p) << endl;
    cout << q << " is stored at " << intptr_t(q) << endl;

    // a string literal can be treated as a pointer
    cout << "String literal stored at " <<  intptr_t("literal");
    cout << endl;

    return 0;
}


/*
String literals can only hold C-strings that are hard-coded into the program. To have a
C-string whose characters are read from the keyboard or a file, you must explicitly define
an array to hold the characters of the C-string. In doing this, you should make sure that
you allocate an additional entry in the array for the terminating null character.

As in the case of literals, the compiler will represent the C-string by the address of the first
character of the string, in this case, the array identifier. Recall from Chapter 8 that an array
identifier without the brackets is interpreted by the compiler to be the address of the first
entry of the array.
*/
