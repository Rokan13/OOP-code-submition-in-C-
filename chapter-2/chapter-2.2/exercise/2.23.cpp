#include <iostream>
#include <cstdlib>

using namespace std;

class stack {
private:
    char *stck;
    int tos;
    int size;

public:
    stack(int s);
    ~stack();
    void push(char ch);
    char pop();
};

stack::stack(int s) {
    stck = (char *)malloc(s);
    if (!stck) {
        exit(1);
    }
    size = s;
    tos = 0;
}

stack::~stack() {
    free(stck);
}

void stack::push(char ch) {
    if (tos == size) {
        cout << "Stack is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop() {
    if (tos == 0) {
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    stack s1(10), s2(10);
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');

    s2.push('x');
    s2.push('y');
    s2.push('z');

    for (i = 0; i < 3; i++) {
        cout << "Pop s1: " << s1.pop() << "\n";
    }

    for (i = 0; i < 3; i++) {
        cout << "Pop s2: " << s2.pop() << "\n";
    }

    return 0;
}