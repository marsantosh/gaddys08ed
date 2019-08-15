// this program uses a reference variable as a function parameter
#include <iostream>
using namespace std;

// function prototype. 
void doubleNum(int &refVar);

int main() {
    int value = 4;

    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);
    cout << "Now back in main, value is " << value << endl;
    return 0;
}

void doubleNum(int &refVar) {
    refVar *= 2;
}