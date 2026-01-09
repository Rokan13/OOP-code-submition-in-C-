
# include <iostream >
using namespace std;
int main ()
{
int a, b, c;
cout << " Enter two numbers : ";
cin >> a >> b;
c = sum(a, b);
cout << "Sum is: " << c;
return 0;
}
// This function needs a prototype
sum (int a, int b)
{
return (a+b);
}
