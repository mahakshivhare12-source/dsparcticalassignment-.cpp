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
    if (front == -1) front = 0;
    q[++rear] = x;
}

void showFrontRear() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front = " << q[front] << ", Rear = " << q[rear] << endl;
    }
}

int main() {
    enqueue(5);
    enqueue(15);
    enqueue(25);
    showFrontRear();
    return 0;
}

