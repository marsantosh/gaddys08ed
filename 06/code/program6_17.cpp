/*
 * Remember that local variables are not automatically initialized as global variables are.
 * The programmer must handle this.
 */
// this program has uninitialized gloabal variable
#include <iostream>
using namespace std;

int globalNum;

int main() {
    cout << "globalNum is " << globalNum << endl;
    return 0;
}