#include<iostream>
using namespace std;
class Base

{
    int x;
public:
    void setx (int n) {
        x = n;
    }
    void showx () {
        cout << x << '\n';
    }
};


class Derived : public Base

{
    int y;
public:
    void sety (int n) {
        y = n;
    }


    void show_sum () { cout << x + y << endl; } // Error !
    void showy () { cout << y << endl; }
};
