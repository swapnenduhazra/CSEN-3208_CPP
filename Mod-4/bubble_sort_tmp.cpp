/*
Write a code for generealized bubble sort.
*/

#include <iostream>

using namespace std;

template <class T>

class Array
{
    T* arr;
    int size;

public:

    Array(int);
    ~Array();

    void inz();
    void display();

    void bubble_sort();
};

template <class T>

Array<T>::Array(int s)
{
    size = s;

    arr = new T[size];
}

template <class T>

Array<T>::~Array()
{
    delete[] arr;
}

template <class T>

void Array<T>::inz()
{
    cout << "Enter elements of array: " << endl;

    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

template <class T>

void Array<T>::display()
{
    cout << "Array: " << endl;

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

template <class T>

void Array<T>::bubble_sort()
{
    T temp;

    for (int i = 0; i < size - 1; i++)
        for (int j = size - 1; j > i; j--)
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
}

int main()
{
    Array<int> a(5);

    a.inz();
    a.display();

    a.bubble_sort();
    a.display();

    return 0;
}