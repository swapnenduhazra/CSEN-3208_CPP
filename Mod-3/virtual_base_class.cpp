
/*
Write a code for vitual base class
*/

#include <iostream>

using namespace std;

class A
{
    public:
    int a;
    void get_a()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }
};

class B : virtual public A
{
    public:
    int b;
    void get_b()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
};

class C : virtual public A
{
    public:
    int c;
    void get_c()
    {
        cout << "Enter the value of c: ";
        cin >> c;
    }
};

class D : public B, public C
{
    public:
    int d;
    void mul()
    {
        d = a * b * c;
    }
    void display()
    {
        cout << "The product of " << a << ", " << b << " and " << c << " is " << d << endl;
    }
};

int main()
{
    D obj;
    obj.get_a();
    obj.get_b();
    obj.get_c();
    obj.mul();
    obj.display();
    return 0;
}