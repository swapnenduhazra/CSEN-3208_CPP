/*
Overload index operator for an array class
*/

#include <iostream>

using namespace std;

class Array
{
    int* arr;
    int size;

public:

    Array(int);
    ~Array();

    void inz();
    void display();

    int& operator[](int);
};

Array::Array(int s)
{
    size = s;

    arr = new int[size];
}

Array::~Array()
{
    delete[] arr;
}

void Array::inz()
{
    cout << "Enter elements of array: " << endl;

    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

void Array::display()
{
    cout << "Array: " << endl;

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int& Array::operator[](int index)
{
    if (index >= 0 && index < size)
        return arr[index];
    else
    {
        cout << "Index out of bounds" << endl;
        exit(0);
    }
}

int main()
{
    Array a1(5);

    a1.inz();
    a1.display();

    cout << "a1[2] = " << a1[2] << endl;

    cout << "a1[6] = " << a1[6] << endl;

    return 0;
}