#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

    public:
        Point() : x(0), y(0)
        {

        }
        Point(int a, int b) : x(a), y(b)
        {

        }

        void getXY(int &a, int &b)
        {
            a = x;
            b = y;
        }

        friend Point operator--(Point &p);       // prefix
        friend Point operator--(Point &p, int);  // postfix
};

Point operator--(Point &p)
{
    --p.x;
    --p.y;
    return p;
}

Point operator--(Point &p, int)
{
    Point old = p;
    p.x--;
    p.y--;
    return old;
}

int main()
{
    Point pt(10, 10);
    int x, y;

    --pt;
    pt.getXY(x, y);
    cout << "(--pt) X: " << x << ", Y: " << y << "\n";

    pt--;
    pt.getXY(x, y);
    cout << "(pt--) X: " << x << ", Y: " << y << "\n";

    return 0;
}