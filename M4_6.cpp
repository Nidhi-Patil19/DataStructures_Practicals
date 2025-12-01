#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key) return root;
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = new Node{10, new Node{5, nullptr, nullptr}, new Node{15, nullptr, nullptr}};
    int key = 15;
    Node* result = search(root, key);
    if (result)
        cout << "Node " << key << " found!" << endl;
    else
        cout << "Node " << key << " not found." << endl;
    return 0;
}