#include <iostream>
#include <cstdlib>
using namespace std;

class dyna {
    int *p;
public:
    dyna(int i);
    ~dyna() { free(p); cout << " freeing \n"; }
    int get() { return *p; }
};
dyna::dyna(int i) {
    p = (int*) malloc(sizeof(int));
    if (!p) {
        cout << "Allocation failure\n";
        exit(1);
    }
    *p = i;
}
int neg(dyna &ob) {
    return -ob.get();
}

int main() {
    dyna o(-10);
    cout << o.get() << "\n";
    cout << neg(o) << "\n";
    dyna o2(20);
    cout << o2.get() << "\n";
    cout << neg(o2) << "\n";
    cout << o.get() << "\n";
    cout << neg(o) << "\n";
    return 0;
}
