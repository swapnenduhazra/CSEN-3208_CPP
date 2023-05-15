/*
Write a program in C++ to divide and multiply an integer by 2 without using any arithmetic operator.
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "The number divided by 2 is: " << (num >> 1) << endl;// Shifts the bits of the number to the right by 1 place by adding 0s to the left
    cout << "The number multiplied by 2 is: " << (num << 1) << endl; // Shifts the bits of the number to the left by 1 place by adding 0s to the right
    return 0;
}