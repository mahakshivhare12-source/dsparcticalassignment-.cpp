#include <iostream>
using namespace std;

const int SIZE = 5;
int q[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((front == 0 && rear == SIZE - 1) || (front == (rear + 1) % SIZE)) {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    q[rear] = x;
    cout << x << " enqueued." << endl;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow!" << endl;
        return;
    }
    cout << q[front] << " dequeued." << endl;
    if (front == rear) front = rear = -1; 
    else front = (front + 1) % SIZE;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    enqueue(6);
    display();
    return 0;
}
