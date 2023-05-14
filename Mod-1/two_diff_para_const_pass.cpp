#include <iostream>

using namespace std;

class para
{   
    private:
        int a;
        int b;
    public:
        /*para(int x, int y)
        {
            a = x;
            b = y;
        }*/

        
    para(int x, int y) : a(x), b(y) {}

        void display()
        {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main()
{
    para p1(10, 20);
    para p2(p1);
    p1.display();
    p2.display();
    return 0;
}