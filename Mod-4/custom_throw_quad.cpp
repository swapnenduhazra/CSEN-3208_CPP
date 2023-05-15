/*
Write a program that reads from the user the coefficients a, b, and c of a quadratic equation ax^2 + bx + c = 0 and prints the solutions of the equation (if any). The program should print an appropriate message if the equation has no solutions. You may assume that the user will always input values for a, b, and c such that the equation has at least one solution.
Use customized throw using cout, throw()
*/


#include <iostream>
#include <math.h>
#include <exception>

using namespace std;

class discriminant_is_negative : public exception
{   
    public:
    const char* what() const throw()
    {
        return "The discriminant is negative. The equation has no real solutions.";
    }
};

class a_is_zero : public exception
{
    public:
    const char* what() const throw()
    {
        return "The coefficient a is zero. The equation is not quadratic.";
    }
};

int main()
{
    double a, b, c, x1, x2, discriminant;
    cout << "Enter the coefficients a, b, and c of a quadratic equation ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    try
    {
        if (a == 0)
        {
            throw a_is_zero();
        }
        discriminant = b * b - 4 * a * c;
        if (discriminant < 0)
        {
            throw discriminant_is_negative();
        }
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The solutions of the equation are " << x1 << " and " << x2 << endl;
    }

    catch (a_is_zero& e)
    {
        cout<<"Error:" << e.what() << endl;
    }

    catch (discriminant_is_negative& e)
    {
        cout<<"Error:"  << e.what() << endl;
    }

    catch (...)
    {
        cout<<"Error: Unknown exception." << endl;
    }

    cout << "Program ends." << endl;
    return 0;
}
