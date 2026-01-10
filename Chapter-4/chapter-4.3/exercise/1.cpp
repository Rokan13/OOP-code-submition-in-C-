#include <bits/stdc++.h>
using namespace std;

class Myclass
{
    int a, b;

    public :
    Myclass (int n, int m) {
       this-> a = n;
       this-> b = m;
    }
    int add() {
        return this->a+this->b;
    }
    void show (){
        int t;
     t = this-> add ();
        cout << t <<endl;
    }
};


int main ()
{
    Myclass ob (10 , 14) ;
    ob. show ();
    return 0;

}
