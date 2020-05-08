# __Linked Lists__
Dynamic allocated data structures may be linked together in memory
to form a chain.

A linked list is a series of connected nodes, where each node is a data structure. The nodes of
a linked list are usually dynamically allocated, used, and then deleted, allowing the linked list
to grow or shrink in size as the program runs. If new information needs to be added to a
linked list, the program simply allocates another node and inserts it into the series. If a
particular piece of information needs to be removed from the linked list, the program deletes
the node containing that information.

### Advantages of __Linked Lists__ over Arrays and Vectors
Although linked lists are more complex to code and manage than arrays, they have
some distinct advantages. First, a linked list can easily grow or shrink in size. In fact,
the programmer doesn’t need to know how many nodes will be in the list. They are simply
created in memory as they are needed.
One might argue that linked lists are not superior to vectors (found in the Standard Template
Library), because they too can expand or shrink. The advantage that linked lists have over
vectors, however, is the speed at which a node may be inserted into or deleted from the list.

To insert a value into the middle of a vector requires all the elements after the insertion point
to be moved one position toward the vector’s end, thus making room for the new value.
Likewise, removing a value from a vector requires all the elements after the removal point to
be moved one position toward the vector’s beginning. When a node is inserted into or deleted
from a linked list, none of the other nodes have to be moved.

### The Structure of Linked Lists
Each node in a linked list contains one or more members that hold data.
In addition to the data, each node contains a _successor pointer_ that points to the next node in the list.

The first node of a nonempty linked list is called the head of the list. To access the nodes in a
linked list, you need to have a pointer to the head of the list. Beginning with the head, you
can access the rest of the nodes in the list by following the successor pointers stored in each
node. The successor pointer in the last node is set to __NULL__ to indicate the _end of the list_.

Because the pointer to the head of the list is used to locate the head of the list, we can think of
it as representing the list head. The same pointer can also be used to locate the entire list by
starting at the head and following the successor pointers, so it is also natural to think of it as
representing the entire list.

### Traversing a List
The process of beginning at the head of a list and going through the entire list while doing
some processing at each node is called traversing the list.

The basic linked list operations are adding an element to a list, removing an
element from the list, traversing the list, and destroying the list.

