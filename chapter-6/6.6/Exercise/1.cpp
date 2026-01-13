#include <iostream>
#include <cstdlib>
using namespace std;

class DynArray
{
    int *data;
    int length;

    public:
        DynArray(int n);
        int &at(int index);
        int get(int index);
        DynArray &operator=(DynArray &other);
};

DynArray::DynArray(int n)
{
    data = new int[n];
    if(!data)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    length = n;
}

int &DynArray::at(int index)
{
    if (index < 0 || index >= length)
    {
        cout << "Bounds error!\n";
        exit(1);
    }
    return data[index];
}

int DynArray::get(int index)
{
    if (index < 0 || index >= length)
    {
        cout << "Bounds error!\n";
        exit(1);
    }
    return data[index];
}

DynArray &DynArray::operator=(DynArray &other)
{
    if (length != other.length)
    {
        cout << "Cannot copy arrays of differing size!\n";
        exit(1);
    }
    for (int i = 0; i < length; i++)
        data[i] = other.data[i];
    return *this;
}

int main()
{
    DynArray arr1(10), arr2(10), arr3(100);

    arr1.at(3) = 10;
    cout << arr1.get(3) << '\n';

    arr2 = arr1;
    cout << arr2.get(3) << '\n';

    arr1 = arr3;

    return 0;
}