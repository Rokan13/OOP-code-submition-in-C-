
#include <bits/stdc++.h>
using namespace std;

class coord {
public:
    int x, y;

    coord(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Binary + operator (obj1 + obj2)
    coord operator+(coord ob) {
        coord temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }

    // Unary + operator (+obj)
    coord operator+() {
        coord temp;
        temp.x = abs(x);
        temp.y = abs(y);
        return temp;
    }

    void show() {
        cout << "X = " << x << ", Y = " << y << endl;
    }
};

int main() {
    coord a(-5, 10), b(3, -4), c;

    cout << "Original a: ";
    a.show();
    cout << "Original b: ";
    b.show();

    // Binary +
    c = a + b;
    cout << "a + b: ";
    c.show();

    // Unary +
    coord d = +a;
    cout << "Unary +a: ";
    d.show();
}
