#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int findMin(Node* root) {
    while (root->left) root = root->left;
    return root->data;
}

int findMax(Node* root) {
    while (root->right) root = root->right;
    return root->data;
}

int main() {
    Node* root = new Node{10, new Node{5, nullptr, nullptr}, new Node{15, nullptr, nullptr}};
    cout << "Minimum: " << findMin(root) << endl;
    cout << "Maximum: " << findMax(root) << endl;
    return 0;
}