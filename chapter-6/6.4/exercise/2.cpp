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

        Coord operator+(const Coord &c2);
        Coord operator+();
};

Coord Coord::operator+(const Coord &c2)
{
    Coord temp;
    temp.x = x + c2.x;
    temp.y = y + c2.y;
    return temp;
}

Coord Coord::operator+()
{
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    return *this;
}

int main()
{
    Coord c1(10, 10), c2(-2, -2);
    int a, b;

    c1 = c1 + c2;
    c1.getXY(a, b);
    cout << "(c1 + c2) X: " << a << ", Y: " << b << "\n";

    c2 = +c2;
    c2.getXY(a, b);
    cout << "(+c2) X: " << a << ", Y: " << b << "\n";

    return 0;
}