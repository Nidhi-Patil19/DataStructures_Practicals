#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inOrder(Node* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

int main() {
    Node* root = new Node{10, new Node{5, nullptr, nullptr}, new Node{15, nullptr, nullptr}};
    cout << "In-Order Traversal: ";
    inOrder(root);
    return 0;
}