#include <bits/stdc++.h>
using namespace std;
class samp
{
    int i, j;

public :

void set_i (int a, int b) {
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
    p = new samp;
    if (!p)
    {
        cout << " Allocation error "<<endl;
        return 1;
    }
    p-> set_i (4 , 5);
    cout << " Product is: " << p-> get_product () << "\n";

}
