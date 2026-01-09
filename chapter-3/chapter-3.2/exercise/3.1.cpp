#include <iostream>
using namespace std;

class Stack {
    int st[10];
    int top;
public:
    Stack() { top = -1; }
    void push(int x) { st[++top] = x; }
    int pop() { return st[top--]; }
    bool isEmpty() { return (top == -1); }

    int getTop() { return top; }
    int getElem(int i) { return st[i]; }
};

void showstack(Stack s) { 
    cout << "Stack contents: ";
    for (int i = 0; i <= s.getTop(); i++)
        cout << s.getElem(i) << " ";
    cout << endl;
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    showstack(s); 

    return 0;
}
