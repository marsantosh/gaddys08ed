// this program processes an array using pointer notation
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // get values to store in the array
    // use pointer notation instead of subscripts
    cout << "Enter " << SIZE << " numbers: ";
    for (int count = 0; count < SIZE; count++)
        cin >> *(numbers + count);
    
    // display the values in the array
    // use pointer notaiton insread of subscropts
    cout << "Here are the numbers you entered:\n";
    for (int count = 0; count < SIZE; count++)
        cout << *(numbers + count) << " ";
    cout << endl;
    return 0;
}