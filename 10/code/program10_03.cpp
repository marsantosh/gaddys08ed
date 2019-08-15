// this program demonstrates the use of the indirection
// operator
#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int* pointer;
    pointer = &x;

    // use both x and pointer ti display the value in x
    cout << "Here is the value in x, printed twice:\n";
    cout << x << "  " << *pointer << endl;

    // assign 100 to the lcoation pointer to by pointer
    // this will actually assign 100 to x
    *pointer = 100;

    // use both x and pointer to display the vlue in x
    cout << "Once again, here is the value in x:\n";
    cout << x << "  " << *pointer << endl;
    return 0;
}