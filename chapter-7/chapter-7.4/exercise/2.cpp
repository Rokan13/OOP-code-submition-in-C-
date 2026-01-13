# include <iostream>
using namespace std;
class A
{
    int i;
public :
A(int a) { i = a; }
};


class B
{
    int j;
public :
B(int a) { j = a; }
};
class C : public A, public B
{
    int k;

};

int main() {

    C ob;

}