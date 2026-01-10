#include <bits/stdc++.h>
using namespace std;

void myRound ( double &num );
int main ()
{

    double num = 100.4;
    cout << num << " rounded is ";

    myRound(num);
    cout << num << "\n";

    num = 10.9;
    cout << num << " rounded is ";

    myRound (num);
    cout << num << "\n";

    return 0;
}
void myRound( double &num )
{
    double frac ;
    double val;

    frac = modf (num , &val );
    if( frac < 0.5)
        num =val ;
    else
        num = val +1.0;

}
