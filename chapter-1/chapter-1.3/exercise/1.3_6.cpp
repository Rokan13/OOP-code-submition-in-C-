#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,min;
    cout<<"enter two numbers:";
    cin>>a>>b;
    min=(a>b)? a:b;

    for(d=2;d<=min;d++)

        if((a%d==0)&&(b%d==0))
            break;
        if(d==min){

            cout<<"No common denominator\n";

        }
            cout<<"The lowest common denominators="<<d<<endl;
}
