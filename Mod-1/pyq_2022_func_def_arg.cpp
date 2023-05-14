/*
Write a function having prototype int addnatural(int, int) such that it adds all the natural numbers between the two parameters, if the function is called with two parameters. If the function is called with one parameter, it adds from 1 to that parameter. Use default arguments.
*/

#include <iostream>

using namespace std;

int addnatural(int, int = 0);

int main()
{
    int a, b;
    a = 10;
    b = 20;
    cout << "Sum of natural numbers between " << a << " and " << b << " is " << addnatural(a, b) << endl;
    cout << "Sum of natural numbers between 1 and " << a << " is " << addnatural(a) << endl;
    return 0;
}

int addnatural(int a, int b)
{
    int sum = 0;
    if (b == 0)
    {
        for (int i = 1; i <= a; i++)
        {
            sum += i;
        }
    }
    else
    {
        for (int i = a + 1; i < b; i++)
        {
            sum += i;
        }
    }
    return sum;
}
