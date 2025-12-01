#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteFromEnd(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next)
        temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
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
    deleteFromEnd(head);
    display(head);
    return 0;
}