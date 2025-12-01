#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int height(Node* root) {
    if (root == nullptr) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = new Node{10, new Node{5, nullptr, nullptr}, new Node{15, nullptr, nullptr}};
    cout << "Height of Tree: " << height(root) << endl;
    return 0;
}