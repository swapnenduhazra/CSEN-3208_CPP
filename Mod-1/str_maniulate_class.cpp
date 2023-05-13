/*
Write a code in a class having multiple customised functions for string manipulation. Take string argument in each function and return the manipulated string. Use the following functions:
1. To find the length of the string. (strlen as xstrlen)
2. To copy target string to source string. (strcpy as xstrcpy)
3. To concatenate two strings. (strcat as xstrcat)
4. To compare two strings. (strcmp as xstrcmp)
5. To reverse the string. (strrev as xstrrev)
6. To convert the string to uppercase. (strupr as xstrupr)
7. To convert the string to lowercase. (strlwr as xstrlwr)
Warning: Do not use any inbuilt function for string manipulation.
Note: Write a main function to test the class.
*/

#include <iostream>

using namespace std;

class StringManipulation
{
private:
    char *str;

public:


    StringManipulation(char *s)
    {
        str = new char;
        str = s;
    }

    int xstrlen (char *);
    int xstrcmp (char *, char *);
    void xstrcpy (char *, char *);
    void xstrcat (char *, char *);
    void xstrrev (char *);
    void xstrupr (char *);
    void xstrlwr (char *);
    void display ()
    {
        cout << str << endl;
    }
};

int StringManipulation::xstrlen (char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int StringManipulation::xstrcmp (char *s1, char *s2)
{
   while(*s1!='\0')
    {
        if(*s1!=*s2)
            break;
        s1++;
        s2++;
    }

    if(*s1==*s2)
        return 0;
    else if(*s1>*s2)
        return 1;
    else
        return -1;
}

void StringManipulation::xstrcpy (char *s1, char *s2)
{
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

void StringManipulation::xstrcat (char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        s1++;
    }
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

void StringManipulation::xstrrev (char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    int j = 0;
    while (j < i)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i--;
        j++;
    }
}

void StringManipulation::xstrupr (char *s)
{
    while (*s != '\0')
    {
        if (*s >= 'a' && *s <= 'z')
        {
            *s = *s - 32;
        }
        s++;
    }
}

void StringManipulation::xstrlwr (char *s)
{
    while (*s != '\0')
    {
        if (*s >= 'A' && *s <= 'Z')
        {
            *s = *s + 32;
        }
        s++;
    }
}

int main()
{
    char s1[100], s2[100];
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    StringManipulation sm1(s1);
    StringManipulation sm2(s2);
    cout << "Length of string 1: " << sm1.xstrlen(s1) << endl;
    cout << "Length of string 2: " << sm2.xstrlen(s2) << endl;
    cout << "Comparing string 1 and string 2: " << sm1.xstrcmp(s1, s2) << endl;
    StringManipulation sm3(s1);
    sm3.xstrcpy(s1, s2);
    cout << "Copying string 2 to string 1: ";
    sm3.display();
    cout<<"Enter string 1: ";
    cin>>s1;
    StringManipulation sm4(s1);
    sm4.xstrcat(s1, s2);
    cout << "Concatenating string 1 and string 2: ";
    sm4.display();
    StringManipulation sm5(s1);
    sm5.xstrrev(s1);
    cout << "Reversing string 1: ";
    sm5.display();
    StringManipulation sm6(s1);
    sm6.xstrupr(s1);
    cout << "Converting string 1 to uppercase: ";
    sm6.display();
    StringManipulation sm7(s1);
    sm7.xstrlwr(s1);
    cout << "Converting string 1 to lowercase: ";
    sm7.display();
    return 0;
}