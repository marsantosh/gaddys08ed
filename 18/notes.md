# Stackas and Queues
A stack is a data structure that stores and retrieves items in a last-in-first-out
manner.

## Applications of Stacks
Stacks are useful data structures for algorithms that work first with the last saved element
of a series. For example, computer systems use stacks while executing programs. When a
function is called, they save the program’s return address on a stack. They also create local
variables on a stack. When the function terminates, the local variables are removed from
the stack and the return address is retrieved. Also, some calculators use a stack for
performing mathematical operations.

## Static and Dynamic Stacks
There are two types of stack data structure: static and dynamic. Static stacks have a fixed size
and are implemented as arrays. Dynamic stacks grow in size as needed and are implemented
as linked lists. In this section you will see examples of both static and dynamic stacks.

## Stack Operations
A stack has two primary operations: push and pop. The push operation causes a value to
be stored, or pushed onto the stack. For example, suppose we have an empty integer stack
that is capable of holding a maximum of three values.

A section of code is said to cause an exception when, in the course of execution, it encounters conditions that make it
impossible to perform the task the code was designed to do. In the case of a static stack,
an __overflow__ exception occurs during a call to push if there is no more room on the stack.
Likewise, an __underflow__ exception occurs in a call to pop if there is nothing on the stack
for pop to return.

## Dyanmic Stacks
A stack may be implemented as a linked list and expand or shrink with each
push or pop operation.

## STL `stack` container
The Standard Template Library offers a stack template that may be
implemented as a `vector`, a `list`, or a `deque`.


(In computer science, a double-ended queue (abbreviated to `deque`, pronounced deck) is an abstract data type that generalizes a queue, for which elements can be added to or removed from either the front (head) or back (tail).

## Queues
A queue is a data structure that stores and retrieves items in a first-in-first-out
manner.
Like a stack, a queue (pronounced “cue”) is a data structure that holds a sequence of
elements. A queue, however, provides access to its elements in first-in, first-out (FIFO) order.

### Application of Queues
Queue data structures are commonly used in computer operating systems. They are
especially important in multiuser/multitasking environments where several users or
tasks may be requesting the same resource simultaneously. Printing, for example, is
controlled by a queue because only one document may be printed at a time. A queue is
used to hold print jobs submitted by users of the system, while the printer services those
jobs one at a time.
Communications software also uses queues to hold information received over networks
and dial-up connections. Sometimes information is transmitted to a system faster than it
can be processed, so it is placed in a queue when it is received.

### Static and Dynamic Queues
Queues, like stacks, can be implemented as arrays or linked lists. Dynamic queues offer the
same advantages over static queues that dynamic stacks offer over static stacks. In fact, the
primary difference between queues and stacks is the way data elements are accessed in each
structure.

### Queue Operations
A queue has a front and a rear like a checkout line in a grocery store.
When an element is added to a queue, it is added to the rear. When an
element is removed from a queue, it is removed from the front. The two primary queue
operations are enqueuing and dequeuing. To __enqueue__ means to insert an element at the
rear of a queue, and to __dequeue__ means to remove an element from the front of a queue.
There are several algorithms for implementing these operations.

