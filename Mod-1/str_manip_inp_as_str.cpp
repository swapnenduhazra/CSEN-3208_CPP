/*
Write a program perfrom commonly use string functions like strlen, strcmp, strcpy, strcat, strrev, strupr, strlwr, 
*/


#include <iostream>

using namespace std;

void xstrrev(string&);
void xstrcpy(string&, string&);
void xstrcat(string&, string&);
int xstrcmp(string, string);
void xstrupr(string&);
void xstrlwr(string&);
int xstrpalin(string);

int main()
{
    string str1, str2;
    cout << "Enter a string: ";
    getline(cin, str1);
    cout << "Enter another string: ";
    getline(cin, str2);
    cout << "Length of string 1: " << str1.length() << endl;
    cout << "Length of string 2: " << str2.length() << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "String 1 after reversing: ";
    xstrrev(str1);
    cout << str1 << endl;
    cout << "String 2 after reversing: ";
    xstrrev(str2);
    cout << str2 << endl;
    cout << "String 1 after converting to uppercase: ";
    xstrupr(str1);
    cout << str1 << endl;
    cout << "String 2 after converting to uppercase: ";
    xstrupr(str2);
    cout << str2 << endl;
    cout << "String 1 after converting to lowercase: ";
    xstrlwr(str1);
    cout << str1 << endl;
    cout << "String 2 after converting to lowercase: ";
    xstrlwr(str2);
    cout << str2 << endl;
    cout << "String 1 after concatenation: ";
    xstrcat(str1, str2);
    cout << str1 << endl;
    cout << "String 2 after concatenation: ";
    xstrcat(str2, str1);
    cout << str2 << endl;
    cout << "String 1 after copying: ";
    xstrcpy(str1, str2);
    cout << str1 << endl;
    cout << "String 2 after copying: ";
    xstrcpy(str2, str1);
    cout << str2 << endl;
    cout << "String 1 after comparing: ";
    xstrcmp(str1, str2);
    cout << "String 2 after comparing: ";
    xstrcmp(str2, str1);
    cout << "String 1 after checking palindrome: ";
    xstrpalin(str1);
    cout << "String 2 after checking palindrome: ";
    xstrpalin(str2);
    return 0;
}

void xstrrev(string &s)
{
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

void xstrcpy(string &s1, string &s2)
{
    int len = s2.length();
    for (int i = 0; i < len; i++)
    {
        s1[i] = s2[i];
    }
}

void xstrcat(string &s1, string &s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i < len2; i++)
    {
        s1[len1 + i] = s2[i];
    }
}

int xstrcmp(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 != len2)
    {
        cout << "Strings are not equal" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (s1[i] != s2[i])
            {
                cout << "Strings are not equal" << endl;
                return 0;
            }
        }
        cout << "Strings are equal" << endl;
        return 1;
    }
}

void xstrupr(string &s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

void xstrlwr(string &s)
{
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
}

int xstrpalin(string s)
{
    int len = s.length();
    int flag = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Palindrome" << endl;
        return 1;
    }
    else
    {
        cout << "Not Palindrome" << endl;
        return 0;
    }
}

