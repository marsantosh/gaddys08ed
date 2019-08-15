#include <iostream>
using namespace std;

void anotherFunction();


/*
 * main function
 */
int main() {
    // vars
    int num = 1;

    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is still " << num << endl;
    return 0;
}

/*
 * anotherFunction
 */
void anotherFunction() {
    int num = 20;
    cout << "In anotherFunction, num is " << num << endl;
}