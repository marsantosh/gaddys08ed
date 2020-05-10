// IntBinaryTree.h
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree {
    private:
        // the TreeNode class is used to build the tree
        class TreeNode {
            friend class IntBinaryTree;
            int value;
            TreeNode *left;
            TreeNode *right;
            TreeNode(int value1, TreeNode *left1 = NULL, TreeNode *right1 = NULL) {
                value = value1;
                left = left1;
                right = right1;
            }
        };

        TreeNode *root;     // pointer to the root of the tree

        // various helper member functions
        void insert(TreeNode *&, int);
        void destroySubtree(TreeNode *);
        void remove(TreeNode *&, int);
        void makeDeletion(TreeNode *&);
        void displayInOrder(TreeNode *) const;
        void displayPreOrder(TreeNode *) const;
        void displayPostOrder(TreeNode *) const;
        int leafCount(TreeNode *) const;
        int size(TreeNode *) const;
        int width(TreeNode *) const;
        int height(TreeNode *) const;
    
    public:
        //  these member functions are the public interface
        // constructor
        IntBinaryTree() {
            root = NULL;
        }
        
        // destructor
        ~IntBinaryTree() {
            destroySubtree(root);
        }

        void insert(int num) {
            insert(root, num);
        }

        bool search(int) const;

        void remove(int num) {
            remove(root, num);
        }

        void showInOrder() const {
            displayInOrder(root);
        }

        void showPreOrder() const {
            displayPreOrder(root);
        }

        void showPostOrder() const {
            displayPostOrder(root);
        }

        int getLeafCount() const {
            return leafCount(root);
        }

        int getSize() const {
            return size(root);
        }

        int getHeight() const {
            return height(root);
        }
};
#endif