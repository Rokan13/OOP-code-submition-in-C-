#include <iostream>
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

        friend Coord operator-(const Coord &c1, const Coord &c2);
        friend Coord operator/(const Coord &c1, const Coord &c2);
};

Coord operator-(const Coord &c1, const Coord &c2)
{
    Coord temp;
    temp.x = c1.x - c2.x;
    temp.y = c1.y - c2.y;
    return temp;
}

Coord operator/(const Coord &c1, const Coord &c2)
{
    Coord temp;
    temp.x = c2.x != 0 ? c1.x / c2.x : 0; // avoid divide by zero
    temp.y = c2.y != 0 ? c1.y / c2.y : 0;
    return temp;
}

int main()
{
    Coord c1(10, 10), c2(5, 3), c3;
    int a, b;

    c3 = c1 - c2;
    c3.getXY(a, b);
    cout << "(c1 - c2) X: " << a << ", Y: " << b << "\n";

    c3 = c1 / c2;
    c3.getXY(a, b);
    cout << "(c1 / c2) X: " << a << ", Y: " << b << "\n";

    return 0;
}