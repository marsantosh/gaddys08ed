// DynIntQueue.cpp
#include <iostream>
#include "DynIntQueue.h"
using namespace std;


/*
 * constructor
 */
DynIntQueue::DynIntQueue() {
    front = NULL;
    rear = NULL;
}

/*
 * destructor
 */
DynIntQueue::~DynIntQueue() {
    clear();
}


/*
 * function enqueue inserts the valie in
 * num at the rear of the queue
 */
void DynIntQueue::enqueue(int num) {
    if (isEmpty()) {
        front = new QueueNode(num);
        rear = front;
    }
    else {
        rear->next = new QueueNode(num);
        rear = rear->next;
    }
}


/*
 * function deque removes the value at the
 * front of the queue, and copies it into num
 */
void DynIntQueue::dequeue(int &num) {
    QueueNode *temp;
    if (isEmpty()) {
        cout << "The queue is empty.\n";
        exit(1);
    }
    else {
        num = front->value;
        temp = front;
        front = front->next;
        delete temp;
    }
}


/*
 * function isEmpty returns trie if the queue
 * is empty, and false otherwise
 */
bool DynIntQueue::isEmpty() const {
    if (front == NULL) {
        return true;
    }
    else {
        return false;
    }
}


/*
 * function clear dequeues all the elements
 * in the queue-
 */
void DynIntQueue::clear() {
    int value;      // dummy var for dequeue
    while (!isEmpty()) {
        dequeue(value);
    }
}
