// program16_05.cpp
// this program demonstrates the use of the bad_alloc
// exception
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

// some comment
// other comment
int main() {
    int *p;
    try {
        p = new int[2];
        p[0] = 10;
        p[1] = 20;
    }
    catch (const bad_alloc &) {
        cout << "Memory cannot be allocated.";
        exit(1);
    }
    cout << p[0] << "  " << p[1] << endl;

    return 0;
}