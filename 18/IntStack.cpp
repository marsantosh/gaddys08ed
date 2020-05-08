// IntStack.cpp
#include "IntStack.h"

/*
 * constructor
 */
IntStack::IntStack(int capacity) {
    this->capacity = capacity;
    stackArray = new int[capacity];
    top = 0;
}

/*
 * adds a value to the stack
 */
void IntStack::push(int value) {
    if (top == capacity)
        throw IntStack::Overflow();
    stackArray[top] = value;
    top++;
}


/*
 * determines whether the stack is empty
 */
bool IntStack::isEmpty() const {
    if (top == 0)
        return true;
    else
        return false;
}


/*
 * removes  avalue from the stakck and returns it
 */
void IntStack::pop(int &value) {
    if (isEmpty())
        throw IntStack::Underflow();
    top--;
    value = stackArray[top];
}
