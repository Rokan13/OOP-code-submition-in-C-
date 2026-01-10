#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int *p;
    p = new int [5];

    int i;

    for (i=0; i <5; i++)
        p[i] = i;
    for (i=0; i <5; i++)
    {
    cout<<" Here is integer at p[" << i << "]: ";
    cout<< p[i]<< endl;

    }
    delete [] p;
   ;
}
