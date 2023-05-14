/*
Write a code for deep copy and shallow copy in two separate classes and show the difference between them.
*/

#include <iostream>

using namespace std;

class ShallowCopy
{
private:
    int *data;

public:
    ShallowCopy(int d)
    {
        data = new int;
        *data = d;
    }

    ShallowCopy(const ShallowCopy &source)
        : data(source.data)
    {
        cout << "Shallow Copy Constructor - shallow copy" << endl;
    }

    ~ShallowCopy()
    {
        delete data;
        cout << "Destructor freeing data" << endl;
    }

    void setData(int d)
    {
        *data = d;
    }

    int getData()
    {
        return *data;
    }
};

class DeepCopy
{
private:
    int *data;
    
public:

    DeepCopy(int d)
    {
        data = new int;
        *data = d;
    }

    DeepCopy(const DeepCopy &source)
    {
        data = new int;
        *data = *source.data;
        cout << "Deep Copy Constructor - deep copy" << endl;
    }

    ~DeepCopy()
    {
        delete data;
        cout << "Destructor freeing data" << endl;
    }

    void setData(int d)
    {
        *data = d;
    }

    int getData()
    {
        return *data;
    }
};

int main()
{
    ShallowCopy obj1(100);
    ShallowCopy obj2(obj1);

    cout << "obj1: " << obj1.getData() << endl;
    cout << "obj2: " << obj2.getData() << endl;

    obj1.setData(1000);

    cout << "obj1: " << obj1.getData() << endl;
    cout << "obj2: " << obj2.getData() << endl;

    DeepCopy obj3(100);
    DeepCopy obj4(obj3);

    cout << "obj3: " << obj3.getData() << endl;
    cout << "obj4: " << obj4.getData() << endl;

    obj3.setData(1000);

    cout << "obj3: " << obj3.getData() << endl;
    cout << "obj4: " << obj4.getData() << endl;

    return 0;
}