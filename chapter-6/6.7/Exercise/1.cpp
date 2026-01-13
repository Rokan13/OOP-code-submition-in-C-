#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String
{
    char *data;
    int length;

    public:
        String(char *s);
        ~String()
        {
            cout << "Freeing " << (unsigned)data << '\n';
            delete[] data;
        }

        char *get()
        {
            return data;
        }

        String &operator=(String &other);
        char &operator[](int index);
};

String::String(char *s)
{
    length = strlen(s) + 1;
    data = new char[length];
    if(!data)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(data, s);
}

String &String::operator=(String &other)
{
    if(length < other.length)
    {
        delete[] data;
        data = new char[other.length];
        if(!data)
        {
            cout << "Allocation error\n";
            exit(1);
        }
    }
    length = other.length;
    strcpy(data, other.data);
    return *this;
}

char &String::operator[](int index)
{
    if(index < 0 || index >= length - 1)
    {
        cout << "\nIndex value " << index << " is out-of-bounds.\n";
        exit(1);
    }
    return data[index];
}

int main()
{
    String s1("Hello"), s2("There");

    cout << s1.get() << '\n';
    cout << s2.get() << '\n';

    s1 = s2;
    cout << s1.get() << '\n';
    cout << s2.get() << '\n';

    cout << s1[0] << s1[1] << s1[2] << '\n';

    s1[0] = 'X';
    s1[1] = 'Y';
    s1[2] = 'Z';
    cout << s1.get() << '\n';

    return 0;
}