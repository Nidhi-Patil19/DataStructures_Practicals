#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    cout << "Total nodes: " << countNodes(head) << endl;
    return 0;
}