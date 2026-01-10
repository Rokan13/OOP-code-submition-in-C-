# include <iostream>
using namespace std;
class samp
{
    int m;
public :
samp (int n) { m = n; }
    int get_m () {
    return m;
}
};



int main ()
{
    samp ob [4][2] = { 1 ,2 ,
    3 , 4 ,
    5 , 6 ,
    7 , 8 ,
    };

    int i;
    for (i=0; i <4; i++)
    {

        cout << ob[i][0]. get_m () << " ";
        cout << ob[i][1]. get_m () <<endl;
    }


}
