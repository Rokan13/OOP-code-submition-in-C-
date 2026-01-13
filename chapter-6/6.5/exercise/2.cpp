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

        friend Coord operator*(const Coord &c, int val);
        friend Coord operator*(int val, const Coord &c);
};

Coord operator*(const Coord &c, int val)
{
    Coord temp;
    temp.x = c.x * val;
    temp.y = c.y * val;
    return temp;
}

Coord operator*(int val, const Coord &c)
{
    Coord temp;
    temp.x = val * c.x;
    temp.y = val * c.y;
    return temp;
}

int main()
{
    Coord c1(10, 10), c2;
    int a, b;

    c2 = c1 * 2;
    c2.getXY(a, b);
    cout << "(c1 * 2) X: " << a << ", Y: " << b << "\n";

    c2 = 3 * c1;
    c2.getXY(a, b);
    cout << "(3 * c1) X: " << a << ", Y: " << b << "\n";

    return 0;
}