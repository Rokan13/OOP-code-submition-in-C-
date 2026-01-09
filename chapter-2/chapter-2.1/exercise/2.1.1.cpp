#include <iostream>

using namespace std;

#define SIZE 100

class q_type {
private:
    int q[SIZE];
    int head, tail;

public:
    q_type() {
        head = tail = 0;
    }

    void q_put(int num) {
        if (tail + 1 == head || (tail == SIZE - 1 && head == 0)) {
            cout << "Queue is full\n";
            return;
        }

        tail++;
        if (tail == SIZE) {
            tail = 0;
        }
        q[tail] = num;
    }

    int deg() {
        if (head == tail) {
            cout << "Queue is empty\n";
            return 0;
        }
        head++;
        if (head == SIZE) {
            head = 0;
        }
        return q[head];
    }
};

int main() {
    q_type q1, q2;
    int i;

    for (i = 0; i < 10; i++) {
        q1.q_put(i);
    }

    for (i = 0; i < 10; i++) {
        q2.q_put(i * i);
    }

    for (i = 0; i < 10; i++) {
        cout << "Dequeue 1: " << q1.deg() << "\n";
        cout << "Dequeue 2: " << q2.deg() << "\n";
    }

    return 0;
}