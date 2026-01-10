#include <bits/stdc++.h>
using namespace std;
class samp
{
    int a;
public :

samp (int n) { a = n; }
    int get_a () { return a; }
};


int main ()
{
    samp ob [4][2] = { 1 , 2 ,
    3,4 ,
    5,6 ,
    7,8 ,
    };

    samp *p;
    p = &ob[0][0];

    int i;
    for (i=0; i <4; i++)
    {
        cout << p-> get_a () <<" ";
        p++;
        cout << p-> get_a () << endl;
        p++;
    }

}
