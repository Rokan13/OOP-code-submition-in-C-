#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int *p;
    p = new int (9);

    cout << " Here is integer at p: " << *p <<endl;
    delete p;
    return 0;

}
