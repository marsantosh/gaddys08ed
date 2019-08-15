// this program shows the donations amde to the United cause
// by the employees of CK graphics, In.
// It displays the donations in order from lowest to highest
// and in the original order they were received
#include <iostream>
#include "donlist.h"
using namespace std;

int main() {
    double funds[] = {
        5, 100, 5, 25, 11,
        5,  25, 5, 5, 100,
        10, 15, 10, 5, 10
    };
    DonationList ckGraphics(15, funds);
    cout << "The donations sorted in ascending orderare:\n";
    ckGraphics.showSorted();
    cout << "The donations in their original order are:\n";
    ckGraphics.show();
    return 0;
}