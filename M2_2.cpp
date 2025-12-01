#include <iostream>
using namespace std;

int stack[5] = {10, 20, 30, 40, 50};
int top = 4;

int main() {
    if (top != -1)
        cout << "Top element: " << stack[top] << endl;
    else
        cout << "Stack is empty.\n";
    return 0;
}