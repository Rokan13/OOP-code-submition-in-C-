#include <iostream>
using namespace std;

class box {
private:
    double l, w, h;
    double volume;
public:
    box(double a, double b, double c) {
        l = a;
        w = b;
        h = c;
        volume = l * w * h;
    }
    void vol();
};

void box::vol() {
    cout << "Volume is: " << volume << endl;
}

int main() {
    box x(2.2, 3.97, 8.09);
    box y(1.0, 2.0, 3.0);
    x.vol();
    y.vol();
    return 0;
}