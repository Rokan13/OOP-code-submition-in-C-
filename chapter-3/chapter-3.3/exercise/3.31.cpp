#include <iostream>
using namespace std;

class who {
    char id;
public:
    who(char c) : id(c) {
        cout << "Constructing who #" << id << endl;
    }

    ~who() {
        cout << "Destroying who #" << id << endl;
    }

    void show() {
        cout << "Object #" << id << endl;
    }
};

// function returning a who object
who makewho(char c) {
    who temp(c);
    return temp; // object returned
}

int main() {
    cout << "Creating object a\n";
    who a('a');

    cout << "\nCalling makewho() to create object b\n";
    who b = makewho('b'); // returned object

    cout << "\nEnd of main\n";
    return 0;
}
