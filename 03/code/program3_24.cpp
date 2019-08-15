#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "This program has paused. Pres Enter to coninue...";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again...";
    cin.get(ch);
    cout << "Thank You!" << endl;
    return 0;
}