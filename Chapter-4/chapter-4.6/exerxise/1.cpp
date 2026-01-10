#include <bits/stdc++.h>
using namespace std;
void triple ( double &num );
int main ()
{
    double d = 7.0;
    triple (&d); // Error
    cout << d;
    return 0;
}

void triple ( double &num )
{
    num = 3 * num ;
}
