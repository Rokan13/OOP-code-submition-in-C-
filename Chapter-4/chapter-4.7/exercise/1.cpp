#include <bits/stdc++.h>
using namespace std;

class strtype
{
    char *p;

public:

    strtype(char *s){
        int l = strlen(s) + 1;
        p = new char[l];
        if (!p)
        {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, s);
    }
    ~strtype() {
        delete[] p;
    }
    char *get() const{
        return p;
    }
};


void show(const strtype &x)
{
    char *s = x.get();
    cout << s <<endl;
}

int main()
{
    strtype a("Hello"), b("There");

    show(a);
    show(b);


}
