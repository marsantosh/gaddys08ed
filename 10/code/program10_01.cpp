// this program uses the & opertor to determine a 
// variable's adress
#include <iostream>
using namespace std;

char letter;
short number;
float amount;
double profit;
char ch;

int main() {
    // print adress of each variable
    cout << "adress of letter is: "
         << long(&letter) << endl;
    cout << "adress of number is: "
         << long(&number) << endl;
    cout << "adress of amount is: "
         << long(&amount) << endl;
    cout << "adress of profit is: "
         << long(&profit) << endl;
    cout << "adress of ch is: "
         << long(&ch) << endl;
    
    return 0;
}