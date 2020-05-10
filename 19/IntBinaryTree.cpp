// IntBinaryTree.cpp
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;


void IntBinaryTree::insert(TreeNode *&tree, int num) {
    // if the tree is empty, make a enw node and make it
    // the root of the tree
    if (!tree) {
        tree = new TreeNode(num);
        return;
    }

    // if nnum is already in treE: return
    if (tree->value == num) {
        return;
    }

    // the tree is jot empty: insert the new node into
    // the left or right subtree
    if (num < tree->value)
        insert(tree->left, num);
    else
        insert(tree->right, num);
}


void IntBinaryTree::destroySubtree(TreeNode *tree) {
    if (!tree)
        return;
    destroySubtree(tree->left);
    destroySubtree(tree->right);
    // delete the node at the root
    delete tree;
}


bool IntBinaryTree::search(int num) const {
    TreeNode *tree = root;

    while (tree) {
        if (tree->value == num) {
            return true;
        }
        else if (num < tree->value)
            tree = tree->left;
        else
            tree = tree->right;
    }
    return false;
}


void IntBinaryTree::remove(TreeNode *&tree, int num) {
    if (tree == NULL)
        return;
    if (num < tree->value)
        remove(tree->right, num);
    else if (num > tree->value)
        remove(tree->right, num);
    else
        // we have found the node to delete
        makeDeletion(tree);
}


void IntBinaryTree::makeDeletion(TreeNode *&tree) {
    // used to hold node that will be deleted
    TreeNode *nodeToDelete = tree;

    // used to locate the point where the
    // left subtree is attached
    TreeNode *attachPoint;

    if (tree->right == NULL) {
        // reokace tree with its left subtree
        tree = tree->left;
    }
    else if (tree->left == NULL) {
        // replace tree with its right subtree
        tree = tree->right;
    }
    else {
        // the node has two children
        // move to right subtree
        attachPoint = tree->right;

        // locate the smallest node in the right subtree
        // by moving as far to the left as possible
        while (attachPoint->left != NULL) {
            attachPoint = attachPoint->left;
        }

        // attach the left subtree of the original tree
        // as the left subtree of the smallest node
        // in the right subtree
        attachPoint->left = tree->left;

        // replace the original tree with its right subtree
        tree = tree->right;
    }

    // delete rooot of the original tree
    delete nodeToDelete;
}



void IntBinaryTree::displayInOrder(TreeNode *tree) const {
    if (tree) {
        displayInOrder(tree->left);
        cout << tree->value << "  ";
        displayInOrder(tree->right);
    }
}


void IntBinaryTree::displayPreOrder(TreeNode *tree) const {
    if (tree) {
        cout << tree->value << "  ";
        displayPreOrder(tree->left);
        displayPreOrder(tree->right);
    }
}


void IntBinaryTree::displayPostOrder(TreeNode *tree) const {
    if (tree) {
        displayPostOrder(tree->left);
        displayPostOrder(tree->right);
        cout << tree->value << "  ";
    }
}

