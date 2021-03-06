// program17_02.cpp
// This prigram illustrates the building 
// and traversal of a linked list

#include <iostream>
#include <fstream>
using namespace std;

struct ListNode {
    // attributes
    double value;
    ListNode *next;

    // constructor
    ListNode(double value1, ListNode *next1 = NULL) {
        value = value1;
        next = next1;
    }
};


int main() {
    double number;
    ListNode *numberList = NULL;

    // open the file
    ifstream numberFile("numberFile.dat");
    if (!numberFile) {
        cout << "Error in opening the file of numbers.";
        exit(1);
    }

    // read the file into a linked list
    cout << "The contents of the file are: " << endl;
    while (numberFile >> number) {
        cout << number << "  ";
        // create a node to hold this number
        numberList = new ListNode(number, numberList);
    }

    // traverse the list while printing
    cout << endl << "The contents of the list are: " << endl;
    ListNode *ptr = numberList;
    while (ptr != NULL) {
        cout << ptr->value << "  ";
        ptr = ptr->next;
    }
    cout << endl;

    return 0;
}