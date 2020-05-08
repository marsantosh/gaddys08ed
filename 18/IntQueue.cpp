// IntQueue.cpp
#include <iostream>
#include "IntQueue.h"
using namespace std;


/*
 * constructor
 */
IntQueue::IntQueue(int s) {
    queueArray = new int[s];
    queueSize = s;
    front = -1;
    rear = -1;
    numItems = 0;
}


/*
 * destructor
 */
IntQueue::~IntQueue() {
    delete [] queueArray;
}



/*
 * function enqueue inserts the vlaie in num at
 * the rear of the queue
 */
void IntQueue::enqueue(int num) {
    if (isFull()) {
        cout << "The queue is full.\n";
        exit(1);
    }
    else {
        // calculate the new rear position
        rear = (rear + 1) % queueSize;
        // insert new item
        queueArray[rear] = num;
        // ipdate item count
        numItems++;
    }
}


/*
 * function dequeue removes the value at the 
 * front of the queue, and copies it into num
 */
void IntQueue::dequeue(int &num) {
    if (isEmpty()) {
        cout << "The queue is empty.\n";
        exit(1);
    }
    else {
        // move fron
        front = (front + 1) % queueSize;
        // retrieve the front item
        num = queueArray[front];
        // update item count
        numItems--;
    }
}


/*
 * function isEmpty returns true if the queue
 * is empty, and false otherwise
 */
bool IntQueue::isEmpty() const {
    if (numItems > 0)
        return false;
    else
        return true;
}


/*
 * function isFull returns true if the queue is
 * full, and false otherwise
 */
bool IntQueue::isFull() const {
    if (numItems < queueSize)
        return false;
    else
        return true;
}


/*
 * function clear resets the front and read indices
 * and sets numItems to 0.
 */
void IntQueue::clear() {
    front = -1;
    rear = -1;
    numItems = 0;
}
