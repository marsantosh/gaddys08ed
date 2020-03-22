// main2.cpp
// this program demonstrates the MyString class. Be sure to
// compile this program with mystring.cpp
#include <iostream>
#include "mystring.h"
using namespace std;


int main() {
    MyString name1("Billy"), name2("Sue");
    MyString name3("Joe");
    MyString string1("ABC"), string2("DEF");


    cout << "name1: " << name1.getValue() << endl;
    cout << "name2: " << name2.getValue() << endl;
    cout << "name3: " << name3.getValue() << endl;
    cout << "string1: " << string1.getValue() << endl;
    cout << "string2: " << string2.getValue() << endl;

    // string comparison to vars os same class
    if (name1 == name2)
        cout << "name1 is equal to name2.\n";
    else
        cout << "name1 is not equal to name2.\n";
    
    // string comparison mystring to literal
    if (name3 == "Joe")
        cout << "name3 is equal to Joe.\n";
    else
        cout << "name3 is not equal to Joe.\n";

    // string comparison >
    if (string1 > string2)
        cout << "string1 is greater than string2.\n";
    
    if (string1 < string2)
        cout << "string1 is less than string2.\n";
    else
        cout << "String1 is not less than string2.\n";
    

    if (string1 >= string2)
        cout << "string1 is greater than or equal to "
             << "string2.\n";
    else
        cout << "string1 is not greater than or equal to "
             << "string2.\n";
    

    if (string1 >= "ABC")
        cout << "string1 is greater than or equal to "
             << "ABC.\n";
    else
        cout << "string1 is not greater than or equal to "
             << "ABC.\n";
    if (string1 <= string2)
        cout << "string1 is less than or equal to "
             << "string2.\n";
    else
        cout << "string1 is not less than or equal to "
             << "string2.\n";
    if (string2 <= "DEF")
        cout << "string2 is less than or equal to "
             << "DEF.\n";
    else
        cout << "string2 is not less than or equal to "
             << "DEF.\n";
    
    return 0;
}