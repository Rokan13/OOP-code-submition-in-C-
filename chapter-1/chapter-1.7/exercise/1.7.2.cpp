#include <iostream>
#include <cctype>
using namespace std;

char minChar(char a, char b);
int minInt(int a, int b);
double minDouble(double a, double b);

int main() {
    cout << "Min is: " << minChar('x', 'a') << "\n";
    cout << "Min is: " << minInt(10, 20) << "\n";
    cout << "Min is: " << minDouble(0.2234, 99.2) << "\n";
    return 0;
}

char minChar(char a, char b) {
    return tolower(a) < tolower(b) ? a : b;
}

int minInt(int a, int b) {
    return a < b ? a : b;
}

double minDouble(double a, double b) {
    return a < b ? a : b;
}
