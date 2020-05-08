// DynIntStack.cpp
#include <iostream>
#include "DynIntStack.h"
using namespace std;

/*
 * member function push pushes the arguemtn onto
 * the stack
 */
void DynIntStack::push(int num) {
    top = new StackNode(num, top);
}

/*
 * member function pop removes the value at the top
 * of the stack and copies it into the variable passed
 * as an argument.
 */
void DynIntStack::pop(int &num) {
    StackNode *temp;

    if (isEmpty()) {
        cout << "The stack is empty.\n";
        exit(1);
    }
    else {
        num = top->value;
        temp = top;
        top = top->next;
        delete temp;
    }
}

/*
 * member function isEmpty returns true if the stack
 * is empty, or false otherwise
 */
bool DynIntStack::isEmpty() const {
    if (!top)
        return true;
    else
        return false;
}
