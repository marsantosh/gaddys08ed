// this program illustrates what can happen when a 
// boolean value is compared to the c++ constant true
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    //
    cout << "Is '?' an alphabetic character?  " << isalpha('?') << "\n";
    cout << "Is 'X' an alphabetic character?  " << isalpha('X') << "\n";
    cout << "Is 'x' an alphabetic character?  " << isalpha('x') << "\n\n";

    cout << "Ask if (isalpha('x') == true) \n";
    if (isalpha('x') == true)
        cout << "the letter x IS an alphabetic character.\n\n";
    else
        cout << "The letter x IS NOT an alphabetic character.\n\n";
    
    cout << "Ask if (islapha('x)) \n";
    if (isalpha('x'))
        cout << "The letter x IS an alphabetic character.\n";
    else
        cout << "The letter x IS NOT an alphabetic character.\n";
    
    return 0;
}