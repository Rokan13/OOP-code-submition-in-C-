#include<iostream>
#include<cstdlib>
using namespace std;

class DynArray
{
    int *data;
    int length;

    public:
        DynArray(int n);
        DynArray &operator=(DynArray &other);
        int &operator[](int index);
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

DynArray &DynArray::operator=(DynArray &other)
{
    if(length != other.length)
    {
        cout << "Cannot copy arrays of differing size!\n";
        exit(1);
    }
    for (int i = 0; i < length; i++)
        data[i] = other.data[i];
    return *this;
}

int &DynArray::operator[](int index)
{
    if (index < 0 || index >= length)
    {
        cout << "\nIndex value " << index << " is out-of-bounds.\n";
        exit(1);
    }
    return data[index];
}

int main()
{
    DynArray arr1(10), arr2(10), arr3(100);

    arr1[3] = 10;
    cout << arr1[3] << "\n";

    arr2 = arr1;
    cout << arr2[3] << "\n";

    arr1 = arr3;

    return 0;
}