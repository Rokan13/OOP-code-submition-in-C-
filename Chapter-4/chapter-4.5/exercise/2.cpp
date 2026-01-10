#include <iostream>
using namespace std;

int main() {
    double* p = new double(-123.0987);

    cout << "Value: " << *p << endl;

    delete p;
    return 0;
}
