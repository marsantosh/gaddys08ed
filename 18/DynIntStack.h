// DynIntStack.h
#ifndef SYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack {
    private:
        class StackNode {
            friend class DynIntStack;
            int value;
            StackNode *next;

            // constructor
            StackNode(int value1, StackNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        StackNode *top;
    public:
        DynIntStack() { top = NULL; }
        void push(int);
        void pop(int &);
        bool isEmpty() const;
};
#endif

/*
    The StackNode class is the data type of each node in the linked list. Because it is easy to
    add and remove items at the beginning of the list, we make the beginning of the linked
    list the top of the stack and use a pointer top to point to the first node in the list. This
    pointer is initialized to NULL by the stack constructor, to signify that the stack is
    created empty.
*/
