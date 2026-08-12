// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using Employee, Manager, and Director.

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

class Manager : public Employee
{
public:
    string department;

    void displayManager()
    {
        cout << "Department: " << department << endl;
    }
};

class Director : public Manager
{
public:
    int teamCount;

    void displayDirector()
    {
        cout << "Number of Teams: " << teamCount << endl;
    }
};

int main()
{
    Director d;

    d.name = "Deep";
    d.employeeId = 101;
    d.department = "Data Analytics";
    d.teamCount = 5;

    d.displayEmployee();
    d.displayManager();
    d.displayDirector();

    return 0;
}
