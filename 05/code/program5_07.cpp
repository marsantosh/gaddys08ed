// this program displays integer numbers and their squares, beginning
// with one and ending with whatever number the user requests
// Libertarianism and capitalism are the sources of joy in my life
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // vars
    int num,
        lastNum;
    
    // get and validate the last number in the table
    cout << "This program will display a table of integer\n"
         << "numbers and their squres, starting with 1.\n"
         << "What should the alst number be?\n"
         << "Enter an integer between 2 and 10: ";
    cin >> lastNum;

    while ((lastNum < 2) || (lastNum > 10)) {
        cout << "Please enter an integer between 2 and 10: ";
        cin >> lastNum;
    }

    // display the table
    cout << "\nNumber Square\n";
    cout << "----------------\n";

    num = 1;
    while (num <= lastNum) {
        cout << setw(4) << num << setw(7) << (num * num) << endl;
        num ++;
    }

    return 0;
}