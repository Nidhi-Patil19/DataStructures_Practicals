#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void preOrder(Node* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

int main() {
    Node* root = new Node{10, new Node{5, nullptr, nullptr}, new Node{15, nullptr, nullptr}};
    cout << "Pre-Order Traversal: ";
    preOrder(root);
    return 0;
}