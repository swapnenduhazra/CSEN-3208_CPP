/*
Write a program to calculate volume of a CUBE and CUBOID using constructor
overloading.
*/


#include <iostream>

using namespace std;

class Volume
{
private:
    int length;
    int breadth;
    int height;

public:

    Volume(int l)
    {
        length = l;
        cout << "Volume of cube: " << length * length * length << endl;
    }

    Volume(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
        cout << "Volume of cuboid: " << length * breadth * height << endl;
    }
};

int main()
{
    Volume v1(10);
    Volume v2(10, 20, 30);
    return 0;
}
