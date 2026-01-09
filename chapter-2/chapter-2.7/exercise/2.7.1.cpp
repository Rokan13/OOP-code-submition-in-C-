#include <iostream>
using namespace std;
#define SIZE 10

class Stack {
    char arr[SIZE];
    int top;
public:
    Stack() : top(0) { }

    void push(char ch) {
        if (top == SIZE) {
            cout << "Stack is full\n";
            return;
        }
        arr[top++] = ch;
    }

    char pop() {
        if (top == 0) {
            cout << "Stack is empty\n";
            return '\0';
        }
        return arr[--top];
    }
};

int main() {
    Stack sA, sB;
    
    sA.push('a');
    sB.push('x');
    sA.push('b');
    sB.push('y');
    sA.push('c');
    sB.push('z');

    for (int i = 0; i < 3; i++)
        cout << "Pop sA: " << sA.pop() << "\n";

    for (int i = 0; i < 3; i++)
        cout << "Pop sB: " << sB.pop() << "\n";

    return 0;
}
