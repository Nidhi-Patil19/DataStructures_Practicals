#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* temp = nullptr;

    // Creating nodes
    int values[] = {10, 20, 30};
    for (int val : values) {
        Node* newNode = new Node{val, nullptr};
        if (head == nullptr) {
            head = newNode;
        } else {
            temp->next = newNode;
        }
        temp = newNode;
    }

    // Displaying the list
    cout << "Linked List: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}