#include<iostream>
using namespace std;

class Coord
{
    int x, y;
    public:
        Coord()
        {
            x = 0;
            y = 0;
        }
        Coord(int a, int b)
        {
            x = a;
            y = b;
        }

        void getXY(int &a, int &b)
        {
            a = x;
            b = y;
        }

        Coord operator--();
        Coord operator--(int dummy);
};

Coord Coord::operator--()
{
    --x;
    --y;
    return *this;
}

Coord Coord::operator--(int dummy)
{
    Coord temp = *this;
    x--;
    y--;
    return temp;
}

int main()
{
    Coord c1(10, 10);
    int x, y;

    c1--;
    c1.getXY(x, y);
    cout << "(c1--) X: " << x << ", Y: " << y << "\n";

    --c1;
    c1.getXY(x, y);
    cout << "(--c1) X: " << x << ", Y: " << y << "\n";

    return 0;
}