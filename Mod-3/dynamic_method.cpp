/*
Write a code for Dynamic Method Dispatch / Dynamic Polymorphism / Dynamic Binding / Late Binding
*/

#include <iostream>

using namespace std;

class A
{
    int x;

public:

    A(int a): x(a) {}

    virtual void show()
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

    A* ptr = &b; // upcasting

    ptr->show(); // dynamic method dispatch

    return 0;
}