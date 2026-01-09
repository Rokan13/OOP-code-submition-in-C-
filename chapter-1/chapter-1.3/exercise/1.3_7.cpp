#include<iostream>
using namespace std;
int main()
{
    double hours,wage;

    cout<<"Enter hours and wage=";
    cin>>hours>> wage;

    double gross=hours*wage;
    cout<<"Pay i=$ "<<gross;
}
