#include <bits/stdc++.h>
using namespace std;
class samp
{

    int i, j;
public :
samp (int a, int b) {
    i=a;
    j=b;
}
    int get_product () {
    return i*j;
}

};

int main ()
{
    samp *p;
    p = new samp (6 , 5);

    cout << " Product is: " << p->get_product () << endl;
    delete p;
    return 0;
}
