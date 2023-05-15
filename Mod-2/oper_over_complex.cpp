/*
Operator oveloading for the following operators of complex
*/

#include <iostream>

using namespace std;

class Complex
{
    int real;
    int imag;

public:


    Complex();
    Complex(int, int);

    Complex operator+(const Complex&);
    friend Complex operator-(const Complex&, const Complex&); // binary operator
    Complex operator*(const Complex&); 
    friend Complex operator-(const Complex&); // unary operator
    friend ostream& operator<<(ostream&, const Complex&);
    friend istream& operator>>(istream&, Complex&);
    Complex operator()(int, int); // function call operator
};

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(int r, int i)
{
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex& c)
{
    Complex temp;

    temp.real = real + c.real;
    temp.imag = imag + c.imag;

    return temp;
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    Complex temp;

    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;

    return temp;
}

Complex Complex::operator*(const Complex& c)
{
    Complex temp;

    temp.real = real * c.real - imag * c.imag;
    temp.imag = real * c.imag + imag * c.real;

    return temp;
}

Complex operator-(const Complex& c)
{
   return Complex(-c.real, -c.imag);
}

ostream& operator<<(ostream& cout, const Complex& c)
{
    cout << c.real << " + " << c.imag << "i" << endl;

    return cout;
}

istream& operator>>(istream& cin, Complex& c)
{
    cin >> c.real >> c.imag;

    return cin;
}

Complex Complex::operator()(int r, int i)
{
    Complex temp;

    temp.real = r;
    temp.imag = i;

    return temp;
}

int main()
{
    Complex c1, c2, c3;

    cout << "Enter c1 & c2: ";
    cin >> c1>> c2;
    c3 = c1 + c2;
    
    cout << "c1 + c2 = " << c3;
    c3 = c2 - c1;
    cout << "c1 - c2 = " << c3;

    c3 = c1 * c2;
    cout << "c1 * c2 = " << c3;

    c3 = -c1;
    cout << "-c1 = " << c3;

    c3 = c1(10, 20);
    cout << "c1(10, 20) = " << c3;

    return 0;
}