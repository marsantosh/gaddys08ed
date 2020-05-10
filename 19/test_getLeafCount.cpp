// program19_01.cpp
// this program builds a binary tree with nodes
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;


int main() {
    IntBinaryTree tree;

    cout << "Inserting numbers. ";
    tree.insert(5);
    tree.insert(8);
    tree.insert(3);
    tree.insert(12);
    tree.insert(9);
    tree.insert(4);

    cout << "Done.\n";

    cout << "Countring leads in the tree..." << endl;
    cout << "Total leafs: " << tree.getLeafCount() << endl;
    return 0;
}