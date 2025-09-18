#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";
    for (char ch : infix) {
        if (isalnum(ch)) { // operand
            postfix += ch;
        } else if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top(); st.pop();
            }
            st.pop(); // remove '('
        } else { // operator
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top(); st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) { postfix += st.top(); st.pop(); }
    return postfix;
}

int main() {
    string infix = "A+B*C";
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    return 0;
}
