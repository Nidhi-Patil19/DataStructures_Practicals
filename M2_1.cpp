#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE], top = -1;

void push(int value) {
    if (top == SIZE - 1)
        cout << "Stack Overflow!\n";
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow!\n";
    else
        cout << "Popped: " << stack[top--] << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}