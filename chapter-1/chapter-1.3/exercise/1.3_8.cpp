#include<iostream>
using namespace std;
int main()
{
    double feet;
    do{
        cout<<"enter feet (0 to quiet):";
        cin>>feet;

        cout<<feet*12<<" inches\n";
    }
    while(feet!=0.0);
}
