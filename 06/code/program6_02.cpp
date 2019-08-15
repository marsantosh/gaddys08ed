// the function displayMessage is repeatedly called from
// withing a loop
#include <iostream>
using namespace std;

/*
* dysplay messaga
* this function displays a greeting
*/
void displayMessage() {
    cout << "Hello from the function displayMessage.\n";
}

/*
* main function
*/
int main() {
    cout << "Hello from main.\n";
    
    for (int count = 0; count < 3; count++)
        displayMessage();
    
    cout << "Back in function main again...\n";
    return 0;
}