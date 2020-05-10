// program19_04.cpp
// this program builds a binary tree with 5 nodes.
// the deleteNode function is used to remove 2 of them
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;


int main() {
    IntBinaryTree tree;

    cout << "Inserting the numbers 5, 8, 3, 12, 9.\n\n";
    tree.insert(5);
    tree.insert(8);
    tree.insert(3);
    tree.insert(12);
    tree.insert(9);

    cout << "Here are the values in the tree: " << endl;
    tree.showInOrder();

    cout << "\nDeleting 8..." << endl;
    tree.remove(8);

    cout << "Deleting 12...\n" << endl;
    tree.remove(12);

    cout << "Now, there are the nodes:\n";
    tree.showInOrder();
    cout << endl;
    return 0;
}