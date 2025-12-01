#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteFromBeginning(Node*& head) {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    deleteFromBeginning(head);
    display(head);
    return 0;
}