#include <iostream>
#include <cstdlib>
using namespace std;

class array {
    int *p;
    int size;
public:
    array(int sz) {
        p = new int[sz];
        if (!p)
        size = sz;
        cout << "Using normal constructor"<<endl;
    }

    ~array() {
        delete[] p;
    }

    array(const array &a) {
        size = a.size;
        p = new int[size];
        if (!p) exit(1);
        for (int i = 0; i < size; i++)
            p[i] = a.p[i];
        cout << "Using copy constructor"<<endl;
    }

    void put(int i, int j) {
        if (i >= 0 && i < size)
            p[i] = j;
    }

    int get(int i) {
        return p[i];
    }
};

int main() {
    array num(10);
    for (int i = 0; i < 10; i++)
        num.put(i, i);

    for (int i = 9; i >= 0; i--)
        cout << num.get(i) << " ";
    cout << endl;

    array x = num;
    for (int i = 0; i < 10; i++)
        cout << x.get(i) << " ";
    cout << endl;

    return 0;
}
