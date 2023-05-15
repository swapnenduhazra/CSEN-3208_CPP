
/*
    Normal Exception Handling
*/


#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "The quotient of " << a << " divided by " << b << " is " << c << endl;
    }
    catch (int e)
    {
        cout << "Division by zero is not allowed." << endl;
    }
    cout << "Bye." << endl;
    return 0;
}