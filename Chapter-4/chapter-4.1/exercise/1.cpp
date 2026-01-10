#include <bits/stdc++.h>
using namespace std;

class Letters {
    char ch;
public:
    Letters(char c) { ch = c; }
    char get_ch() { return ch; }
};

int main() {

    Letters arr[10] = {
        Letters('A'),  Letters('B'),  Letters('C'),  Letters('D'),  Letters('E'),
        Letters('F'),  Letters('G'),  Letters('H'),  Letters('I'),  Letters('J')
    };

    for(int i = 0; i < 10; i++) {
        cout << arr[i].get_ch() << " ";
    }

    cout << endl;

}
