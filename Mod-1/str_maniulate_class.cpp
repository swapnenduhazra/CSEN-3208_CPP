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
    char *xstrcpy (char *, char *);
    char *xstrcat (char *, char *);
    int xstrcmp (char *, char *);
    char *xstrrev (char *);
    char *xstrupr (char *);
    char *xstrlwr (char *);
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

char *StringManipulation::xstrcpy (char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char *StringManipulation::xstrcat (char *s1, char *s2)
{
    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

int StringManipulation::xstrcmp (char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}

char *StringManipulation::xstrrev (char *s)
{
    int i = 0, j = 0;
    char temp;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    while (i > j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i--;
        j++;
    }
    return s;
}

char *StringManipulation::xstrupr (char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
    return s;
}

char *StringManipulation::xstrlwr (char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        i++;
    }
    return s;
}

int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    StringManipulation sm(s1);
    cout << "Length of the first string: " << sm.xstrlen(s1) << endl;
    cout << "Length of the second string: " << sm.xstrlen(s2) << endl;
    cout << "Copying the second string to the first string: " << sm.xstrcpy(s1, s2) << endl;
    cout << "Concatenating the first string with the second string: " << sm.xstrcat(s1, s2) << endl;
    cout << "Comparing the first string with the second string: " << sm.xstrcmp(s1, s2) << endl;
    cout << "Reversing the first string: " << sm.xstrrev(s1) << endl;
    cout << "Converting the first string to uppercase: " << sm.xstrupr(s1) << endl;
    cout << "Converting the first string to lowercase: " << sm.xstrlwr(s1) << endl;
    return 0;
}
