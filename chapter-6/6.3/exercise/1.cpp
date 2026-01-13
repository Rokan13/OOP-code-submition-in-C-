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
        Coord(int i, int j)
        {
            x = i;
            y = j;
        }

        void getXY(int &i, int &j)
        {
            i = x;
            j = y;
        }

        int operator<(const Coord &o);
        int operator>(const Coord &o);
};

int Coord::operator<(const Coord &o)
{
    return (x < o.x && y < o.y);
}

int Coord::operator>(const Coord &o)
{
    return (x > o.x && y > o.y);
}

int main()
{
    Coord c1(10, 10), c2(5, 3);

    if (c1 > c2)
        cout << "c1 > c2\n";
    else
        cout << "c1 <= c2\n";

    if (c1 < c2)
        cout << "c1 < c2\n";
    else
        cout << "c1 >= c2\n";

    return 0;
}