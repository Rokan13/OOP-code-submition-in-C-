#include <iostream>
using namespace std;

class Base {
    int a, b;
public:
    int c;
    void setab(int i, int j) {
 a = i;
b = j; }
    void getab(int &i, int &j) {
 i = a;
 j = b; }
};

class derived1 : public Base {
    // Public inheritance → base class public members stay public
};

class derived2 : private Base {
    // Private inheritance → base class public members become private
};

int main() {
    derived1 o1;
    derived2 o2;
    int i, j;



    o1.getab(i, j);    //  Legal (public inheritance → getab() remains public)
    // o2.getab(i, j);   //  Illegal (private inheritance → getab() becomes private)

    o1.c = 10;         //  Legal (public inheritance → c remains public)
    // o2.c = 10;     //  Illegal (private inheritance → c becomes private)

    cout << "i = " << i << ", j = " << j << endl;
    cout << "o1.c = " << o1.c << endl;

    return 0;
}
