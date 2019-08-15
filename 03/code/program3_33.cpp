#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    unsigned seed;

    // get a "seed" value from the user
    cout << "Enter a seed value: ";
    cin >> seed;

    // set te random generator seed befor calling rand()
    srand(seed);

    // now generate and print three random nubmers
    cout << rand() << "      ";
    cout << rand() << "      ";
    cout << rand() << "      " << endl;
    return 0;
}