#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack is full. Cannot push " << value << endl;
    } else {
        stack[++top] = value;
        cout << "Pushed: " << value << endl;
    }
}

// Function to check if the stack is empty
bool isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
bool isFull() {
    return top == SIZE - 1;
}

int main() {
    cout << "Is stack empty? " << (isEmpty() ? "Yes" : "No") << endl;

    push(100);  // Now this function is declared and defined

    cout << "Is stack full? " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}