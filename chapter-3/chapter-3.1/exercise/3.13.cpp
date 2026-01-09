#include <iostream>
using namespace std;

class Queue {
    int* data;
    int size;
    int front, rear;
public:
    Queue(int s = 10) {
        size = s;
        data = new int[size];
        front = rear = -1;
    }

    
    Queue(const Queue &q) {
        size = q.size;
        data = new int[size];
        front = q.front;
        rear = q.rear;
        for (int i = 0; i <= rear; i++)
            data[i] = q.data[i];
    }

    
    Queue& operator=(const Queue &q) {
        if (this != &q) {
            delete[] data;
            size = q.size;
            data = new int[size];
            front = q.front;
            rear = q.rear;
            for (int i = 0; i <= rear; i++)
                data[i] = q.data[i];
        }
        return *this;
    }

    ~Queue() { delete[] data; }

    void enqueue(int x) { data[++rear] = x; }
    int dequeue() { return data[++front]; }
    void show() {
        for (int i = front+1; i <= rear; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q1(5);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);

    Queue q2;
    q2 = q1; 

    cout << "q1: "; q1.show();
    cout << "q2: "; q2.show();

    return 0;
}
