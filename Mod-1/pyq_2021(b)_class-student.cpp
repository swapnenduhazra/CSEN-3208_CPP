/*
Write a program in C++ to create a class STUDENT with the following
specifications:
Data members: Name, Roll No. and Marks.
Member functions: ReadData & WriteData.
Use the above specifications to read information of five students and print
details of those students who scored more than average marks.
*/

#include <iostream>

using namespace std;

class Student
{   

private:
    char name[20];
    int roll_no;
    int marks;

public:

    void readData()
    {
        cout << "Enter the name of the student: " << endl;
        cin >> name;
        cout << "Enter the roll number of the student: " << endl;
        cin >> roll_no;
        cout << "Enter the marks of the student: " << endl;
        cin >> marks;
    }

    void writeData()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll number of the student is: " << roll_no << endl;
        cout << "The marks of the student is: " << marks << endl;
    }

    int getMarks()
    {
        return marks;
    }
};

void average(Student s[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += s[i].getMarks();
    }
    cout << "The average marks of the students is: " << sum / 5 << endl;
}

int main()
{
    Student s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].readData();
    }
    for (int i = 0; i < 5; i++)
    {
        s[i].writeData();
    }
    average(s);
    return 0;
}