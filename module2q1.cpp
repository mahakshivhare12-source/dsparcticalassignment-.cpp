#include <iostream>
using namespace std;
const int SIZE=5;
int stk[SIZE], top=-1;

void push(int x){
    if(top==SIZE-1) cout<<"Overflow\n";
    else stk[++top]=x;
}
void pop(){
    if(top==-1) cout<<"Underflow\n";
    else cout<<"Popped: "<<stk[top--]<<endl;
}
int main(){
    push(10); push(20);
    pop();
}
