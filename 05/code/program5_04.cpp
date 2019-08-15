#include <iostream>
using namespace std;

int main() {
    // vars
    int countUp = 1;

    while (countUp < 6) {
        cout << countUp << "   ";
        countUp++;
    }
    cout << endl << endl;

    int countDown = 5;
    while (countDown > 0) {
        cout << countDown << "   ";
        countDown--;
    }
    cout << endl;

    return 0;
}