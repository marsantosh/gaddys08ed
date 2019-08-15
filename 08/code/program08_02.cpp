#include <iostream>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    // int count;

    // input the hours worked by each employee
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
         << " employees: ";
    
    for (int count = 0; count < NUM_EMPLOYEES; count++)
        cin >> hours[count];
    
    // display the contents of the array
    cout << "The hours you entered are: ";

    for (int count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    
    cout << endl;
    return 0;
}