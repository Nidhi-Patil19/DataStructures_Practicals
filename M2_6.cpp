#include <iostream>
using namespace std;

#define SIZE 5
int cqueue[SIZE], front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front)
        cout << "Circular Queue Overflow!\n";
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        cqueue[rear] = value;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Circular Queue Underflow!\n";
    else {
        cout << "Dequeued: " << cqueue[front] << endl;
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueue(4);
    return 0;
}