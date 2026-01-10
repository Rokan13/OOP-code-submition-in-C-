#include <iostream>
using namespace std;


long mystrtoi(const char* start, char** end, int base = 10) {
    return strtol(start, end, base);
}
int main() {
    const char* str1 = "1234xyz";
    const char* str2 = "1010abcd";
    const char* str3 = "7Bhe";
    char* end;


    long val1 = mystrtoi(str1, &end);
    cout << "Value 1: " << val1 << ", stopped at: '" << *end << "'\n";


    long val2 = mystrtoi(str2, &end, 2);
    cout << "Value 2: " << val2 << ", stopped at: '" << *end << "'\n";


    long val3 = mystrtoi(str3, &end, 16);
    cout << "Value 3: " << val3 << ", stopped at: '" << *end << "'\n";

    return 0;
}
