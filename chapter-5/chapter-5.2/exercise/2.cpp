#include <iostream>
#include <cstdlib>
using namespace std;

class myclass {
    int *p;
public:
    myclass(int i);
    ~myclass() { delete p; }
    friend int getval(const myclass &o);
};

myclass::myclass(int i) {
    p = new int;
    if (!p) {

    }
    *p = i;
}

int getval(const myclass &o) {
    return *o.p;
}

int main() {
    myclass a(1), b(2);
    cout << getval(a) << " " << getval(b) << endl;
    cout << getval(a) << " " << getval(b);
    return 0;
}
