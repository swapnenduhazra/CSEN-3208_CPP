/*
Write a code to explain both static member variables and static member functions.
*/

#include <iostream>

using namespace std;

class Test
{
    int a;
    static int b; // static member variable declaration

public:

    Test()
    {
        a = 10;
        b = 20;
    }

    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    static void display() // static member function can only access static member variables
    {
        cout << "b = " << b << endl;
    }
};

int Test::b; // static member variable declaration and initialization outside the class definition is mandatory 

int main()
{
    Test t1, t2;

    t1.show();
    t2.show();

    Test::display();

    return 0;
}