// program12_02.cpp
// this program illustrates that you cannot compare
// C-strings with relational operators. Although it appears
// to test the strings for equality, that is not what happens
#include <iostream>
using namespace std;


int main() {
    // two arrays for holding two strings
    const int LENGTH = 40;
    char firstString[LENGTH], secondString[LENGTH];

    // read two strings
    cout << "Enter a string: ";
    cin.getline(firstString, LENGTH);
    cout << "Enter another string: ";
    cin.getline(secondString, LENGTH);

    // attempt to compare the two strings using ==
    if (firstString == secondString) {
        cout << "You entered the same string twice.\n";
    }
    else {
        cout << "The strings are not the same.\n";
    }

    cout << endl;

    return 0;
}

/*
The if statement compares the memory addresses of the two arrays instead of
comparing the strings of characters stored at those addresses.

To properly compare C-strings, you should use the library function strcmp . This function
takes two C-strings as parameters and returns an integer that indicates how the two strings
compare to each other.
 */
