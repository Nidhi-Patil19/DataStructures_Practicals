#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool search(Node* head, int key) {
    while (head) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    int key = 20;
    cout << "Searching for " << key << ": " << (search(head, key) ? "Found" : "Not Found") << endl;
    return 0;
}