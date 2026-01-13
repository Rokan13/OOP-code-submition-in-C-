# include <iostream>
using namespace std;

class Base
{
protected :
int a, b;
public :
void setab (int n, int m) {
    a = n;
    b= m;

}
};
class Derived : public Base
{
    int c;
public :
void setc (int n) { c = n; }
    // this function has access to a and b from base
    void showbc ()
{
    cout << a << endl << b << endl << c << endl;
}
};
int main ()
{
    Derived ob;

    ob. setab (1 , 2);
    ob. setc (3) ;
    ob. showbc ();
    return 0;
}