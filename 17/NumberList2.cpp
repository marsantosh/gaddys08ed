// NumberList2.ccpp
#include "NumberList2.h"

/*
 * returns the number of elements in a list
 */
int NumberList2::size(ListNode *aList) const {
    if (aList == NULL) {
        return 0;
    }
    else {
        return 1 + size(aList->next);
    }
}

/*
 * prints all elements stored in a list
 */
void NumberList2::displayList(ListNode *aList) const {
    if (aList != NULL) {
        cout << aList->value << "  ";
        displayList(aList->next);
    }
}


/*
 * adds a value at the end of a list
 */
NumberList2::ListNode *NumberList2::add(ListNode *aList, double value) {
    if (aList == NULL) {
        return new ListNode(value);
    }
    else {
        // add the value to the end of the tail
        aList->next = add(aList->next, value);
        return aList;
    }
}


/*
 * removes a value from the list, if it exists in the lsit
 */
NumberList2::ListNode *NumberList2::remove(ListNode *aList, double value) {
    if (aList == NULL) {
        return NULL;
    }
    // the list is not empty
    // see if value is first on the list
    // if so, delete the value and return the tail
    if (aList->value == value) {
        ListNode *tail = aList->next;
        delete aList;
        return tail;
    }
    else {
        // value is not the first on the list
        // return the list with the value removed
        // from the tail of the list
        aList->next = remove(aList->next, value);
        return aList;
    }
}


/*
 * destructor
 */
NumberList2::~NumberList2() {
    ListNode *ptr = head;
    while (ptr != NULL) {
        // point to the node to be deleted
        ListNode *garbage = ptr;
        // go on to the next node
        ptr = ptr->next;
        // delete the current node
        delete garbage;
    }
}
