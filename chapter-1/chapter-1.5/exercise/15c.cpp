#include <iostream>
using namespace std;

class Queue {
private:
    static const int SIZE = 100;
    int arr[SIZE];
    int front, rear, count;

public:
    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        count++;
        cout << value << " enqueued." << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue." << endl;
            return -1;
        }
        int value = arr[front];
        front = (front + 1) % SIZE;
        count--;
        cout << value << " dequeued." << endl;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    q.enqueue(40);

    cout << "Front element after operations: " << q.peek() << endl;

    return 0;
}
