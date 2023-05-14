/*
Write a program to determine whether the given string is palindrome or not. Use string data type.
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int len = str.length();
    int flag = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}