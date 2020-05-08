// SortedNumberList.cpp
#include "SortedNumberList.h"

/*
 * adds a number to the sorted list
 * this function overrides add un NumberList
 */
void SortedNumberList::add(double number) {
    ListNode *nodePtr, *previousNodePtr;

    if (head == NULL || head->value >= number) {
        // a new node goes at the beginning of the list
        head = new ListNode(number, head);
    }
    else {
        previousNodePtr = head;
        nodePtr = head->next;

        // find the insertion point
        while (nodePtr != NULL && nodePtr->value < number) {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        // insert the new node just before nodePtr
        previousNodePtr->next = new ListNode(number, nodePtr);
    }
}