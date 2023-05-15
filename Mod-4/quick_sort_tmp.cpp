/*
Write a Quick sort programming for generic data type.
Use function / Class template.
*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Data
{
    public:
    T *arr;
    int size;
    Data(int);
    void getData();
    void show();
    void quickSort(int, int);
    int partition(int, int);
};

template <class T>
Data<T>::Data(int size)
{
    this->size = size;
    arr = new T[size];
}

template <class T>
void Data<T>::show()
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <class T>
void Data<T>::quickSort(int low, int high)
{
    if (low < high)
    {
        int pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

template <class T>
int Data<T>::partition(int low, int high)
{
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

template <class T>
void Data<T>::getData()
{
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}



int main()
{
    Data<int> d(5);
    d.getData();
    cout << "Before Sorting: ";
    d.show();
    d.quickSort(0, 4);
    cout << "After Sorting: ";
    d.show();
    return 0;
}