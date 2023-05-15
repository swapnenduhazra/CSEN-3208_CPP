/*
Overload new and delete operator to allocate and deallocate memory for an object of a class.
*/

#include<iostream>

using namespace std;

class Test
{
    int a;
    int b;
    public:
        Test()
        {
            cout << "Constructor called" << endl;
        }
        ~Test()
        {
            cout << "Destructor called" << endl;
        }
        void* operator new(size_t size)
        {
            cout << "New operator overloaded" << endl;
            void* p = malloc(size);
            return p;
        }
        void operator delete(void* p)
        {
            cout << "Delete operator overloaded" << endl;
            free(p);
        }
};

int main()
{
    Test* t = new Test();
    delete t;
    return 0;
}
