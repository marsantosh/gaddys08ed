// program19_01.cpp
// this program builds a binary tree with nodes
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;


int main() {
    IntBinaryTree tree;

    cout << "Inserting numbers. ";
    tree.insert(10);
    tree.insert(9);
    tree.insert(15);
    tree.insert(5);
    tree.insert(7);
    tree.insert(12);
    tree.insert(24);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);
    tree.insert(11);
    tree.insert(14);
    tree.insert(21);
    tree.insert(25);

    cout << "Done.\n";

    cout << "Getting width of the tree..." << endl;
    cout << "Tree width: " << tree.getWidth() << endl;
    return 0;
}