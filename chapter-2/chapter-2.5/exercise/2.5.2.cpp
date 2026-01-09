#include <iostream>
using namespace std;

union SwapBytes {
    unsigned char bytes[2];
    unsigned value;
    SwapBytes(unsigned v);
    void swapBytes();
};

SwapBytes::SwapBytes(unsigned v) {
    value = v;
}

void SwapBytes::swapBytes() {
    unsigned char temp = bytes[0];
    bytes[0] = bytes[1];
    bytes[1] = temp;
}

int main() {
    SwapBytes s(1);
    s.swapBytes();
    cout << s.value;
    return 0;
}
