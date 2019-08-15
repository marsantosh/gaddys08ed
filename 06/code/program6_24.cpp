#include <iostream>
using namespace std;

// function prototypes
void getNum(int &);
int doubleNum(int);

int main() {
    // vars
    int value;

    // call getNum to get a number and store it in value
    getNum(value);

    // call doubleNum, passing it the nubmer stored in value
    // assign value the number returned by the function
    value = doubleNum(value);

    // display the resulting number
    cout << "That value double is " << value << endl;
    return 0;
}

void getNum(int &userNum) {
    cout << "Enter a number: ";
    cin >> userNum;
}

int doubleNum(int number) {
    return number * 2;
}