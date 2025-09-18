#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> st;
    for (char ch : expr) {
        if (ch=='(' || ch=='{' || ch=='[') st.push(ch);
        else if (ch==')' || ch=='}' || ch==']') {
            if (st.empty()) return false;
            char top = st.top(); st.pop();
            if ((ch==')' && top!='(') ||
                (ch=='}' && top!='{') ||
                (ch==']' && top!='[')) return false;
        }
    }
    return st.empty();
}

int main() {
    string expr = "{[()]}";
    cout << expr << " is " << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
