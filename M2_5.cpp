#include <iostream>
using namespace std;

int queue[5] = {10, 20, 30, 40, 50};
int front = 0, rear = 4;

int main() {
    if (front <= rear) {
        cout << "Front: " << queue[front] << endl;
        cout << "Rear: " << queue[rear] << endl;
    } else {
        cout << "Queue is empty.\n";
    }
    return 0;
}