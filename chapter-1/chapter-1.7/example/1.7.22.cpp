#include <iostream>
using namespace std;

void date(const char* date);
void date(int month, int day, int year);

int main()
{
    date("8/23/99");
    date(8, 23, 99);
    return 0;
}

void date(const char* date)
{
    cout << "Date: " << date << "\n";
}

void date(int month, int day, int year)
{
    cout << "Date: " << month << "/" << day << "/" << year << "\n";
}
