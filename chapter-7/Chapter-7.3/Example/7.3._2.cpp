# include <iostream>
using namespace std;
class Base
{
public :
Base () { cout << " Constructing base class "<<endl; }
    ~ Base () { cout << " Destructing base class "<<endl; }
};
class derived : public Base
{
    int j;
public :
derived (int n)
{
    cout << " Constructing derived class "<<endl;
    j = n;
}
    ~ derived () { cout << " Destructing derived class "<<endl; }
    void showj () { cout << j << endl; }
};
int main ()
{
    derived o (10) ;
    o. showj ();
    return 0;
}