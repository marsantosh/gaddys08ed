# Binary Trees
A _binary tree_ is a collection of nodes in which each node is associated with up to two
successor nodes, respectively called the left and right child. Not every node in the binary
tree will have two children: one or both nodes may be omitted. A node in a binary tree that
has no children is called a leaf node.
A node that has children is said to be the __parent__ of its __children__. For a nonempty collection
of nodes to qualify as a binary tree, every node must have at most one parent, and there
must be exactly one node with no parent. The one node that has no parent is called the
root of the binary tree. An empty collection of nodes is regarded as constituting an empty
binary tree.
There is some similarity between a linked list and a binary tree. The __root__ of a binary tree
corresponds to the head of a list, a child of a binary tree node corresponds to a successor
node in a list, and the parent of a binary tree node corresponds to the predecessor of a
node in the list. And of course, the analog of the empty list is the empty binary tree.

Binary trees are used to store values in their nodes. A node in a binary tree will therefore be
a structure or class object that contains a member for storing the value, as well as two
members that point to nodes that are the left and right children of that node:

```c++
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
};
```
A binary tree is itself represented by a pointer to the node that is the root of the tree.

### Applications of Binary Trees
Searching any linear data structure, such as an array or a standard linked list, is slow when
the structure holds a large amount of information. This is because of the sequential nature
of linear data structures. Binary trees and their generalizations are excellent data structures
for searching large amounts of information. They are commonly used in database
applications to organize key values that index database records. When used to facilitate
searches, a binary tree is called a binary search tree.

Values are stored in a binary search tree so that a node’s left
child holds data whose value is less than the node’s data, and the node’s right child holds
data whose value is greater than the node’s data. This is true for all nodes in the tree that
have children.

In fact, in a binary search tree, all the nodes to the left of a node hold values less than the
node’s value. Likewise, all the nodes to the right of a node hold values that are greater than
the node’s data. When an application is searching a binary search tree, it starts at the root
node. If the root node does not hold the search value, the application branches either to the
left or right child, depending on whether the search value is less than or greater than the
value at the root node. This process continues until the value is found or it is determined
that the search value is not in the tree.

