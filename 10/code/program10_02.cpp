// this program stores the address of a vriable in a pointer
#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int* pointer;

    pointer = &x;
    cout << "The value in x is " << x << endl;
    cout << "The address of x is " << pointer << endl;
    return 0;
}