// Question: Write a C++ program to demonstrate Single Inheritance using Employee and Manager.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int employeeId;
    double salary;

    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee
{
public:
    int teamSize;
    string department;

    void displayManager()
    {
        cout << "Department: " << department << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    Manager m;

    m.name = "Deep";
    m.employeeId = 101;
    m.salary = 50000;

    m.department = "Data Analytics";
    m.teamSize = 8;

    m.displayEmployee();
    m.displayManager();

    return 0;
}
