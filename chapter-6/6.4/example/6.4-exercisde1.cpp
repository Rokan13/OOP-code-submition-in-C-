
#include <bits/stdc++.h>
using namespace std;

class coord {
public:
    int x, y;

    coord(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Prefix - operator
    coord operator-() {
        coord temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }

    // Postfix - operator
    coord operator-(int) {
        coord temp = *this; // পুরনো মান রাখা হলো
        x = -x;
        y = -y;
        return temp;        // postfix এ পুরনো মান ফেরত দেয়া হয়
    }

    void show() {
        cout << "X = " << x << ", Y = " << y << endl;
    }
};

int main() {
    coord a(5, -10);
    cout << "Original a: ";
    a.show();

    // Prefix -
    coord p = -a;
    cout << "Prefix -a: ";
    p.show();

    // Postfix -
    coord q = a - 0;
    cout << "Postfix a- (old value): ";
    q.show();

    cout << "After postfix a: ";
    a.show();
}
