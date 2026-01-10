# include <iostream>
using namespace std;
class Samp
{
    int m;
public :
Samp (int n) { m = n; }
    int get_m () {
    return m;
}
};
int main ()
{
    Samp ob [3] = { -1 , -2 , -3  };
    int i;
    for (i=0; i <3; i++)
        cout << ob[i]. get_m () <<endl;

    return 0;
}
