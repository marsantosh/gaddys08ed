# include <iostream>
using namespace std;

void anotherFunction();
int num = 2;

int main() {
    // main function
    cout << "On main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}

/*
 * anotherFunction
 */
void anotherFunction() {
    // anotherFunction
    cout << "In anotherFunction, num is " << num << endl;
    num = 50;
    cout << "But it now changed to " << num << endl;
}