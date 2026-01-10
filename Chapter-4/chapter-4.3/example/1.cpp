#include <bits/stdc++.h>
using namespace std;

class Inventory
{
    char item [20];

    double cost ;
    int on_hand ;
public :

Inventory ( char *i, double c, int o)
{
    strcpy (this ->item , i);
    this ->cost = c;
    this ->on_hand = o;
}

    void show (){
    cout << this ->item ;
    cout << ": $" << this ->cost ;
    cout << " On hand : " << this ->on_hand <<endl;
}

};


int main () {

    Inventory ob("Wrench", 4.95 , 4);
    ob. show ();
    return 0;
}
