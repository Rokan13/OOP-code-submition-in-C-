#include <bits/stdc++.h>
using namespace std;

int main() {

    int *i = new int;
    *i = 10;

    cout<<"Integer: "<< *i<<endl;
    delete i;

    float *f = new float;
    *f= 10.34234;
    cout<<"Float: "<<*f<<endl;
    delete f;

long *l = new long;;
    *l=100000L;
    cout<<"Long: "<<*l<<endl;
    delete l;
char *c = new char;
    *c = 'a';
    cout<<"Char: "<<*c<<endl;
    delete c;


}
