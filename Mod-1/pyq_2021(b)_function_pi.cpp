/*
Write a function with two parameters viz, pi and radius of circle that returns the area of a circle. Parameter pi is assigned a default value of 3.1415926. Write the driver program to call the function twice such that: (i) the default value is used, and (ii) the default value is superseded.
*/

#include <iostream>

using namespace std;

float area_of_circle(float radius, float pi = 3.1415926)
{
    return pi * radius * radius;
}

int main()
{
    float radius;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    cout << "The area of the circle is: " << area_of_circle(radius) << endl;
    cout << "The area of the circle is: " << area_of_circle(radius, 3.14) << endl;
    return 0;
}