#include<bits/stdc++.h>
using namespace std;

class coord{
int x,y;
public:
    coord(){
    x=0;y=0;
    }
    coord(int a,int b){

    x=a;y=b;}
    void getXY(int &a,int &b)
    {
        a=x; b=y;
    }
    coord operator+(coord ob2);
};

    coord coord::operator+(coord ob2){
    coord temp;
    temp.x=x+ob2.x;
    temp.y=y+ob2.y;

    return temp;
    }
int main()
{
    coord o1(10,10), o2(5,3),o3;
    int x,y;
    o3=o1+o2;
    o3.getXY(x,y);
    cout<<"(o1+o2) x: "<<x << ", y: "<<y <<"\n";
}
