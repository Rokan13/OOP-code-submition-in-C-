#include <bits/stdc++.h>
using namespace std;

class SafeArray2D {
    int rows = 2, cols = 3;
    int data[2][3];
public:

    int& at(int r, int c) {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            cout << "Index out of bounds!\n";
            exit(1);
        }
        return data[r][c];
    }
    int get(int r, int c) {
        return at(r, c);
    }

};

int main() {

    SafeArray2D arr;

    arr.at(0, 0) = 10; arr.at(0, 1) = 20; arr.at(0, 2) = 30;

    arr.at(1, 0) = 40; arr.at(1, 1) = 50; arr.at(1, 2) = 60;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr.get(i, j) << " ";
        cout << "\n";
    }
    return 0;
}
