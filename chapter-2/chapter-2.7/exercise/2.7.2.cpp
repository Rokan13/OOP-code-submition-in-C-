#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class StrType {
    char *text;
    int length;
public:
    StrType(const char *str) {   // changed to const char*
        length = strlen(str);
        text = (char *) malloc(length + 1);
        if (!text) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(text, str);
    }

    ~StrType() {
        cout << "Freeing text\n";
        free(text);
    }

    void show() {
        cout << text << " - length: " << length << "\n";
    }
};

int main() {
    StrType sA("This is a test."), sB("I like C++.");
    sA.show();
    sB.show();
    return 0;
}
