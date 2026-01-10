#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char* p;
    int len;
public:
    strtype() {
        len = 255;
        p = new char[len];
        p[0] = '\0';
    }
    strtype(const char* str, int size) {
        len = (size > 0) ? size : 255;
        p = new char[len];
        strncpy(p, str, len - 1);
        p[len - 1] = '\0';
    }
    ~strtype() { delete[] p; }
    char* getstring() { return p; }
    int getlength() { return len; }
};

int main() {
    strtype s1;
    cout << "s1: '" << s1.getstring() << "', length: " << s1.getlength() << endl;

    strtype s2("Hello, world!", 20);
    cout << "s2: '" << s2.getstring() << "', length: " << s2.getlength() << endl;

    return 0;
}