
#include <iostream>

using namespace std;

class Matrix
{
    int** arr;
    int rows;
    int cols;

public:


    Matrix(int, int);
    ~Matrix();

    void inz();
    void display();

    Matrix operator+(const Matrix&);
    friend Matrix operator-(const Matrix&, const Matrix&);
    friend Matrix operator*(const Matrix&, const Matrix&);
    Matrix operator=(const Matrix&);
    bool operator==(const Matrix&);
    friend bool operator!=(const Matrix&, const Matrix&);
};

Matrix::Matrix(int r, int c)
{
    rows = r;
    cols = c;

    arr = new int* [rows];

    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
}

Matrix::~Matrix()
{
    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;
}

void Matrix::inz()
{
    cout << "Enter elements of matrix: " << endl;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
}

void Matrix::display()
{
    cout << "Matrix: " << endl;

    for (int i = 0; i < rows; i++)
    {
        cout << endl;

        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
    }

    cout << endl;
}

Matrix Matrix::operator+(const Matrix& m)
{
    Matrix temp(rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            temp.arr[i][j] = arr[i][j] + m.arr[i][j];

    return temp;
}

Matrix operator-(const Matrix& m1, const Matrix& m2)
{
    Matrix temp(m1.rows, m1.cols);

    for (int i = 0; i < m1.rows; i++)
        for (int j = 0; j < m1.cols; j++)
            temp.arr[i][j] = m1.arr[i][j] - m2.arr[i][j];

    return temp;
}

Matrix operator*(const Matrix& m1, const Matrix& m2)
{
    Matrix temp(m1.rows, m2.cols);

    for (int i = 0; i < m1.rows; i++)
        for (int j = 0; j < m2.cols; j++)
        {
            temp.arr[i][j] = 0;

            for (int k = 0; k < m1.cols; k++)
                temp.arr[i][j] += m1.arr[i][k] * m2.arr[k][j];
        }

    return temp;
}

Matrix Matrix::operator=(const Matrix& m)
{
    rows = m.rows;
    cols = m.cols;

    arr = new int* [rows];

    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = m.arr[i][j];

    return *this;
}

bool Matrix::operator==(const Matrix& m)
{
    if (rows == m.rows && cols == m.cols)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] != m.arr[i][j])
                    return false;
            }

        return true;
    }

    else
        return false;
}

bool operator!=(const Matrix& m1, const Matrix& m2)
{
    if (m1.rows != m2.rows || m1.cols != m2.cols)
        return true;

    else
    {
        for (int i = 0; i < m1.rows; i++)
            for (int j = 0; j < m1.cols; j++)
            {
                if (m1.arr[i][j] != m2.arr[i][j])
                    return true;
            }

        return false;
    }
}