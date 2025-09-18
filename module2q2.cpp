// Program to display top element of a stack without removing it
#include <iostream>
using namespace std;

const int SIZE = 5;   // maximum size of stack
int stk[SIZE];
int top = -1;         // stack is empty initially

// Push operation
void push(int element) {
    if (top == SIZE - 1) {
        cout << "Stack Overflow! Cannot push " << element << endl;
    } else {
        top++;
        stk[top] = element;
        cout << element << " pushed into stack." << endl;
    }
}

// Peek operation (display top without removing)
void peek() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stk[top] << endl;
    }
}

// Display all elements
void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stk[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Push some test elements
    push(10);
    push(20);
    push(30);

    // Display the stack
    display();

    // Show the top element without removing
    peek();

    return 0;
}
