
#include <iostream >
using namespace std;
class myclass
{
public :

int a;


16

AN OVERVIEW OF C++
1.5. CLASSES: A FIRST LOOK

};
int main ()
{
myclass ob1 , ob2 ;

ob1 .a = 10;

ob2 .a = 99;
cout << ob1 .a << "\n";
cout << ob2 .a << "\n";

}
