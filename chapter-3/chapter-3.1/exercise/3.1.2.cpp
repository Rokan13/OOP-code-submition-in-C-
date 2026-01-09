#include <iostream>
using namespace std;

class Queue {
    int data[10];
    int front, rear;
public:
    Queue() { front = rear = -1; }
    void enqueue(int x) { data[++rear] = x; }
    int dequeue() { return data[++front]; }
    void show() {
        for (int i = front+1; i <= rear; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q1, q2;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);

    q2 = q1;  

    cout << "q1: "; q1.show();
    cout << "q2: "; q2.show();

    return 0;
}
