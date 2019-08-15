// this program shows how the exit function casuses a program
// to stop executing
#include <iostream>
#include <cstdlib>
using namespace std;

// function prototype
void someFunction();

int main() {
    // main function
    someFunction();
    return 0;
}

void someFunction() {
    cout << "this program terminates with the exit function.\n!";
    cout << "Bye!\n";
    exit(0);
    cout << "This message will never be displayed\n";
    cout << "because the program has already terminated.\n";
}
