#include <iostream>
using namespace std;

const int SIZE = 5;
int stk[SIZE], top = -1;

void push(int x) {
    if (top == SIZE - 1) cout << "Stack Overflow!" << endl;
    else stk[++top] = x;
}
void pop() {
    if (top == -1) cout << "Stack Underflow!" << endl;
    else cout << stk[top--] << " popped." << endl;
}
void peek() {
    if (top == -1) cout << "Stack is empty." << endl;
    else cout << "Top element = " << stk[top] << endl;
}
void display() {
    if (top == -1) cout << "Stack is empty." << endl;
    else {
        cout << "Stack: ";
        for (int i=0;i<=top;i++) cout << stk[i] << " ";
        cout << endl;
    }
}

int main() {
    int choice, val;
    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: cout<<"Enter value: "; cin>>val; push(val); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice\n";
        }
    } while(choice != 5);
    return 0;
}
