// this program has two functions:
// main and displayMessage
#include <iostream>
using namespace std;

/*
 * this function displays a greeting
*/
void displayMessage() {
     cout << "Hello form the function displayMessage\n";
}

/*
 * main function
*/
int main() {
    cout << "Hello from main.\n";
    displayMessage();
    cout << "Back in function main again.\n";
    return 0;
}