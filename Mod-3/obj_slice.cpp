/*
Write a good code for object slicing problem.
*/

#include <iostream>

using namespace std;

class A
{
    int x;

public:

    A(int a): x(a) {}

    void show()
    {
        cout << "x = " << x << endl;
    }
};

class B: public A
{
    int y;

public:

    B(int a, int b): A(a), y(b) {}

    void show()
    {
        cout << "y = " << y << endl;
    }
};

int main()
{
    A a(10);
    B b(20, 30);

    a.show();
    b.show();

    a = b; // object slicing

    a.show();

    return 0;
}