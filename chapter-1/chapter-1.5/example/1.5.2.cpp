# include <iostream >
using namespace std;
int main ()
{

myclass ob1 , ob2 ;
ob1 .a = 10;
ob2 .a = 99;

cout << ob1 . get_a () << "\n";
cout << ob2 . get_a () << "\n";
return 0;
}
