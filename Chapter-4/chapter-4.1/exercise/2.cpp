#include <bits/stdc++.h>
using namespace std;
class Squares
{
    int num , sqr ;

public :

   Squares (int a, int b) {
     num = a; sqr = b;
}
    void show() {

    cout << num << " " << sqr << endl;
}
};

int main() {

   Squares arr[10] = {Squares(1, 1), Squares(2, 4), Squares(3,9),Squares(4,16), Squares(5, 25), Squares(6,36),
    Squares(7,49), Squares(8,64), Squares(9,81), Squares(10, 100)

};

for (int i=0; i<10; i++) {

 arr[i].show();

}

}
