/*
Write a constructor definition to provide input for a 2D array at runtime.
2D array should be created at runtime.
*/

#include <iostream>

using namespace std;

class Array
{
private:
    int **arr;
    int row;
    int col;

public:

    Array(int r, int c)
    {
        row = r;
        col = c;
        arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
    }

    void setArray()
    {
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < row; i++)
        {
            cout << "Enter the elements of row " << i + 1 << endl;
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void getArray()
    {
        cout << "The elements of the array are: " << endl;
        for (int i = 0; i < row; i++)
        {
            cout << "The elements of row " << i + 1 << endl;
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    Array a(r, c);
    a.setArray();
    a.getArray();
    return 0;
}