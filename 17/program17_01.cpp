// program17_01.cpp
// this program illustrates the creation of linked lists
#include <iostream>
using namespace std;

struct ListNode {
    double value;
    ListNode *next;
};


int main() {
    ListNode *head;

    // create first node with 12.5
    head = new ListNode;        // allocate new node
    head->value = 12.5;         // store the value
    head->next = NULL;          // signify end of list

    // create second node with 13.5
    ListNode *secondPtr = new ListNode;
    secondPtr->value = 13.5;
    secondPtr->next = NULL;     // second node is end of list
    head->next = secondPtr;     // first node points to second

    // print the list
    cout << "First item is " << head->value << endl;
    cout << "Second item is " << head->next->value << endl;

    return 0;
}