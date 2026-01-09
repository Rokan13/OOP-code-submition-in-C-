#include <iostream>
#include <string>
using namespace std;

class Card {
private:
    string title;
    string author;
    int copies;

public:
    void store(string t, string a, int c) {
        title = t;
        author = a;
        copies = c;
    }

    void show() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main() {
    Card book1;
    book1.store("The C++ Programming Language", "Bjarne Stroustrup", 5);
    book1.show();
    return 0;
}

