// this program uses a hwile loop to display the
// numbers 1 - 5 and their squares
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // vars
    int num = 1;

    cout << "Number   Square\n";
    cout << "----------------\n";
    while (num <= 50) {
        cout << setw(4) << num << setw(7) << (num * num) << endl;
        num++;
    }
    return 0;
}