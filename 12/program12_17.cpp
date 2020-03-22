// program12_17.cpp
// this program demonstrates the use fo the string to find
// and insert member functions
#include <iostream>
#include <string>
using namespace std;


// function prototype
string dollarFormat(string );


int main(void) {
    string input;

    // get the dollar amount from the user
    cout << "Enter a dollar amount in the form nnnnn.nn : ";
    cin >> input;

    // display the formatted dollar amount
    cout << "Formatted amount: " << dollarFormat(input) << endl;
    return 0;
}


string dollarFormat(string original) {
    string formatted = original;
    int dp = formatted.find('.');
    int pos = dp;

    while (pos > 3) {
        pos = pos - 3;
        formatted.insert(pos, ",");
    }

    formatted.insert(0, "$");
    return formatted;
}
