// NumberList2.h
/*
    Let’s write a new version of the NumberList class in which the member functions for
    adding an element, removing an element, and displaying the list have recursive
    implementations.
*/
#include <iostream>
using namespace std;


class NumberList2 {
    protected:
        // declare a class for the list node
        struct ListNode {
            double value;
            ListNode *next;
            ListNode(double value1, ListNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        ListNode *head;     // list head pointer
    public:
        NumberList2() { head = NULL; }
        ~NumberList2();
        void add(double value) { head = add(head, value); }
        void remove(double value) { head = remove(head, value); }
        void displayList() const { displayList(head); }
        int size() const { return size(head); }
    private:
        // recursive implementations
        ListNode *add(ListNode *aList, double value);
        ListNode *remove(ListNode *aList, double value);
        void displayList(ListNode *aList) const;
        int size(ListNode *aList) const;
};


/*
    If you look at the class, you will notice that each public member function has
    a corresponding private member function. The private member functions
    provide recursive implementations for their public counterparts. Notice that each of the
    private member functions has a parameter of type ListNode* . This parameter is needed for
    the recursion to work.
    You might wonder why we do not make the recursive functions public. The reason is
    that the parameters of type ListNode* are implementation details, and therefore should
    not be exposed to the users of the class. The user of the public interface of the class does
    not need to know that the list is internally implemented using a pointer to ListNode
    named head .
*/
