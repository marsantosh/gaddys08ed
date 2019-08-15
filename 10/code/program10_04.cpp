// this program demonstrates the ability of a pointer
// to point to different variables
#include <iostream>
using namespace std;

int main() {
    int x = 25, y = 50, z = 75;
    int* pointer;

    // display the contents of x, y and z
    cout << "Here are the values of x, y, and z:\n";
    cout << x << "  " << y << "  " << z << endl;

    // use the pointer to manipulate x, y, and z
    pointer = &x;
    *pointer *= 2;

    pointer = &y;
    *pointer *= 2;

    pointer = &z;
    *pointer *= 2;

    // display the contents of x, y and z
    cout << "Once again, here are the values "
         << "of x, y and z:\n";
    cout << x << "   " << y << "  " << z << endl;
    return 0;
}