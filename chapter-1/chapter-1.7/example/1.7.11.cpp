#include <iostream>
using namespace std;

int abs(int n);
long abs(long n);
double abs(double n);

int main()
{
    cout << "Absolute value of -10: " << abs(-10) << "\n\n";
    cout << "Absolute value of -10L: " << abs(-10L) << "\n\n";
    cout << "Absolute value of -10.01: " << abs(-10.01) << "\n\n";
    return 0;
}

int abs(int n)
{
    cout << "In integer abs()\n";
    return n < 0 ? -n : n;
}

long abs(long n)
{
    cout << "In long abs()\n";
    return n < 0 ? -n : n;
}

double abs(double n)
{
    cout << "In double abs()\n";
    return n < 0 ? -n : n;
}
