#include <iostream>
using namespace std;

#define MAX 5   // Maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Function to push element into stack
    void push(int x) {
        if (top == MAX - 1) {
            cout << "\nStack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack.\n";
        }
    }

    // Function to pop element from stack
    void pop() {
        if (top == -1) {
            cout << "\nStack Underflow! No element to pop.\n";
        } else {
            cout << arr[top] << " popped from stack.\n";
            top--;
        }
    }

    // Function to view top element
    void peek() {
        if (top == -1) {
            cout << "\nStack is empty.\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Function to display stack
    void display() {
        if (top == -1) {
            cout << "\nStack is empty.\n";
        } else {
            cout << "\nStack elements:\n";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    while (true) {
        cout << "\n====== STACK MENU ======\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
