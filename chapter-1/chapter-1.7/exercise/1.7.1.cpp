#include <iostream>
#include <cmath>
using namespace std;

int sroot(int i);
long sroot(long i);
double sroot(double i);

int main() {
    cout << "Square root of 90.34 is: " << sroot(90.34) << "\n";
    cout << "Square root of 90L is: " << sroot(90L) << "\n";
    cout << "Square root of 90 is: " << sroot(90) << "\n";
    return 0;
}

int sroot(int i) {
    cout << "Computing integer root\n";
    return static_cast<int>(sqrt(static_cast<double>(i)));
}

long sroot(long i) {
    cout << "Computing long root\n";
    return static_cast<long>(sqrt(static_cast<double>(i)));
}

double sroot(double i) {
    cout << "Computing double root\n";
    return sqrt(i);
}
