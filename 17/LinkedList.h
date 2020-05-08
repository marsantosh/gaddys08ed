// LinkedList.h
#include <iostream>
using namespace std;

template <class T>
class LinkedList {
    protected:
        // declare a class for the list node
        struct ListNode {
            T value;
            ListNode *next;
            ListNode(T value1, ListNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        ListNode *head;
    public:
        LinkedList() { head = NULL; }
        ~LinkedList();
        void add(T value);
        void remove(T value);
        void displayList() const;
};


/*
 * adds a new element to the end of the list
 */
template <class T>
void LinkedList<T>::add(T value) {
    if (head == NULL) {
        head = new ListNode(value);
    }
    else {
        // the list is not empty
        // use nodePtr to traverse the list
        ListNode *nodePtr = head;
        while (nodePtr->next != NULL) {
            nodePtr = nodePtr->next;
        }

        // nodePtr->next is NULL so nodePtr points to the last node
        // create a new node and out it after the last node
        nodePtr->next = new ListNode(value);
    }
}


/*
 * removes a nubmer from a list
 * the function does not assume that the list is sorted
 */
template <class T>
void LinkedList<T>::remove(T value) {
    ListNode *nodePtr, *previousNodePtr;

    // if the list is empty, do nothing
    if (!head) {
        return;
    }

    // determine if the frist ndoe is the one to delete
    if (head->value == value) {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
    }
    else {
        // initialize nodePtr to the head of the list
        nodePtr = head;

        // skip nodes whose value member is not num
        while (nodePtr != NULL && nodePtr->value != value) {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        // link the previous node to the node after
        // nodePtr, then delete nodePtr
        if (nodePtr) {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
        }
    }
}


/*
 * displayList outputs a sequece of all values
 * currently stored in the list
 */
template <class T>
void LinkedList<T>::displayList() const {
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
 * destructor deallocates the memoru used by the list
 */
template <class T>
LinkedList<T>::~LinkedList() {
    ListNode *nodePtr = head;
    while (nodePtr != NULL ) {
        // garbage keeps track of ndoe to be deleted
        ListNode *garbage = nodePtr;
        // move on to the next node, if any
        nodePtr = nodePtr->next;
        // delete the "garbage" node
        delete garbage;
    }
}


/*
 * 
    Notice that the implementation of the class member functions, previously in a separate .cpp
    file, have now been folded into the header file. This has been done to avoid the tremendous
    complexities of compiling and linking a multifile program that uses templates.
 *
 */