/*
Create a class employee with two instance variables name and salary. Write one
parameterized constructor (use initializer list) and one show method.
Create a class manager, which will have one method name enhance, which will
increase the salary of a particular employee, i.e. employee reference should be
passed as an argument to enhance function. Now make this enhance method of
manager class a friend function of employee class.
Create multiple employee objects and call enhances method. Provide output.
***Consider all important instance variables, functions and constructor of class
manager
*/

#include <iostream>

using namespace std;

class Employee;

class Manager
{
public:
    void enhance(Employee&, int);
};

class Employee
{
    string name;
    int salary;
public:
    Employee(string name, int salary): name(name), salary(salary)
    {
        cout << "Employee constructor called" << endl;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
    friend void Manager::enhance(Employee&, int);
};

void Manager::enhance(Employee& e, int amount)
{
    e.salary += amount;
}

int main()
{
    Employee e1("Rahul", 10000);
    Employee e2("Raj", 20000);
    Employee e3("Rohan", 30000);
    Manager m;
    m.enhance(e1, 1000);
    m.enhance(e2, 2000);
    m.enhance(e3, 3000);
    e1.show();
    e2.show();
    e3.show();
    return 0;
}
