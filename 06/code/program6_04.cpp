// this program has three functions: main, deep, and deeper.
#include <iostream>
using namespace std;

/*
 * deeper
 */
void deeper() {
    cout << "I am now inside the function deeper.\n";
}

/*
 * deep
 */
void deep() {
    cout << "I am now inside the function deep.\n";
    deeper();
    cout << "Now I am back in deep.\n";
}

/*
 * main
 */
int main() {
    cout << "I am starting in function main.\n";
    deep();
    cout << "back in function main again.\n";
    return 0;
}
