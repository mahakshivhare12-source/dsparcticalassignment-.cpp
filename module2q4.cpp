#include <iostream>
using namespace std;

const int SIZE = 5;
int q[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if (front == -1) front = 0; // first element
    q[++rear] = x;
    cout << x << " enqueued." << endl;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return;
    }
    cout << q[front++] << " dequeued." << endl;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) cout << q[i] << " ";
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
