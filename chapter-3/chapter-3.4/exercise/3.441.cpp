#include <iostream>
using namespace std;
class pr1;
class pr2;
bool inuse(const pr1 &p1, const pr2 &p2);

class pr1 {
    int printing;
public:
    pr1() { printing = 0; }
    void set_print(int status) { printing = status; }
    friend bool inuse(const pr1 &p1, const pr2 &p2);
};

class pr2 {
    int printing;
public:
    pr2() { printing = 0; }

    void set_print(int status) { printing = status; }

    friend bool inuse(const pr1 &p1, const pr2 &p2);
};

bool inuse(const pr1 &p1, const pr2 &p2) {
    return (p1.printing != 0 || p2.printing != 0);
}

int main() {
    pr1 printer1;
    pr2 printer2;

    cout << "Printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

    printer1.set_print(1); 
    cout << "Printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

    printer1.set_print(0); 
    printer2.set_print(1);
    cout << "Printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

    printer2.set_print(0); 
    cout << "Printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

    return 0;
}
