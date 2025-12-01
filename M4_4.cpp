#include <iostream>
using namespace std;

// Node structure of the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Post-order traversal function
void postOrder(Node* root) {
    if (root == NULL)
        return;

    // Traverse left subtree
    postOrder(root->left);

    // Traverse right subtree
    postOrder(root->right);

    // Visit root
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Post-Order Traversal: ";
    postOrder(root);

    return 0;
}
