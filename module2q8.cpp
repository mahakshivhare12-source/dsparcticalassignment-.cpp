#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> st;
    for (char ch : postfix) {
        if (isdigit(ch)) {
            st.push(ch - '0');
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch (ch) {
                case '+': st.push(a+b); break;
                case '-': st.push(a-b); break;
                case '*': st.push(a*b); break;
                case '/': st.push(a/b); break;
            }
        }
    }
    return st.top();
}

int main() {
    string postfix = "23*54*+9-";  // Example
    cout << "Postfix: " << postfix << endl;
    cout << "Result: " << evaluatePostfix(postfix) << endl;
    return 0;
}
