#include <iostream>
using namespace std;

class cl1 {
    int i, j;
public:
    cl1(int a, int b) { i = a; j = b; }
    void show() { cout << i << " " << j << endl; }
};

class cl2 {
    int i, j;
public:
    cl2(int a, int b) { i = a; j = b; }
    void show() { cout << i << " " << j << endl; }
};

int main() {
    cl1 x(10, 20);
    cl2 y(0, 0);

    // x = y;  // Error: cannot assign different class object

    x.show();
    y.show();

    return 0;
}
