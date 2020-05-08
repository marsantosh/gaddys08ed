// NumbersList.cpp
#include "NumberList.h"
using namespace std;

/*
 * `add` adds a new element to the end of the list
 */
void NumberList::add(double number) {
    if (head == NULL) {
        head = new ListNode(number);
    }
    else {
        // the list is not empty
        // Use nodePtr to traverse the list
        ListNode *nodePtr = head;
        while (nodePtr->next != NULL) {
            nodePtr = nodePtr->next;
        }
        // nodePtr->next is NULL so nodePtr points to the last note
        // create a new node and put it after the last node
        nodePtr->next = new ListNode(number);
    }
}


/*
 * `displayList` outputs a sequence of all values
 * currently sotred in the list
 */
void NumberList::displayList() const {
    ListNode *nodePtr = head;
    while (nodePtr) {
        // print the value in the current node
        cout << nodePtr->value;
        
        // move on to the next node
        nodePtr = nodePtr->next;
        if (nodePtr != NULL) {
            cout << " -> ";
        }
        else {
            cout << " *";
        }
    }
}


/*
 * `destructor` deallocates in the memory used by the list
 */
NumberList::~NumberList() {
    ListNode *nodePtr = head;
    while (nodePtr != NULL) {
        // garbage keeps track of node to be deleted
        ListNode *garbage = nodePtr;
        // move on to the next node, if any
        nodePtr = nodePtr->next;
        // delete the "garbage" node
        delete garbage;
    }
}
