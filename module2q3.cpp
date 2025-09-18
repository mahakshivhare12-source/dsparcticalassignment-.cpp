// Program to check if a stack is empty or full
#include <iostream>
using namespace std;

const int SIZE = 5;    // maximum stack size
int stk[SIZE];
int top = -1;          // initially stack is empty

// Push operation
void push(int element) {
    if (top == SIZE - 1) {
        cout << "Stack is FULL (Overflow)." << endl;
    } else {
        stk[++top] = element;
        cout << element << " pushed into stack." << endl;
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        cout << "Stack is EMPTY (Underflow)." << endl;
    } else {
        cout << stk[top--] << " popped from stack." << endl;
    }
}

// Function to check if stack is empty
bool isEmpty() {
    return (top == -1);
}

// Function to check if stack is full
bool isFull() {
    return (top == SIZE - 1);
}

int main() {
    // Initially empty
    if (isEmpty()) cout << "Stack is empty." << endl;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    if (isFull()) cout << "Stack is full." << endl;

    pop();
    if (!isFull()) cout << "Stack is not full now." << endl;

    while (!isEmpty()) pop();

    if (isEmpty()) cout << "Stack is empty now." << endl;

    return 0;
}
