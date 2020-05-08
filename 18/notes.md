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