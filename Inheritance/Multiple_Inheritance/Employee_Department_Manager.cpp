// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Employee and Department as base classes and Manager as the derived class.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int employeeId;

    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }
};

class Department
{
public:
    string departmentName;

    void displayDepartment()
    {
        cout << "Department: " << departmentName << endl;
    }
};

class Manager : public Employee, public Department
{
public:
    int teamSize;

    void displayManager()
    {
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    Manager m;

    m.name = "Deep";
    m.employeeId = 101;
    m.departmentName = "Data Analytics";
    m.teamSize = 8;

    m.displayEmployee();
    m.displayDepartment();
    m.displayManager();

    return 0;
}
