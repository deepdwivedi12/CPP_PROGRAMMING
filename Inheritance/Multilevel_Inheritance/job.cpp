// Question: Write a C++ program to demonstrate Multilevel Inheritance using Person, Employee, and Manager.

#include <iostream>
using namespace std;

// Level 1 - Base Class
class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Level 2 - Derived Class
class Employee : public Person
{
public:
    int employeeId;
    double salary;

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Level 3 - Derived Class
class Manager : public Employee
{
public:
    string department;
    int teamSize;

    void displayManager()
    {
        cout << "Department: " << department << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    Manager m;

    // Person data
    m.name = "Deep";
    m.age = 18;

    // Employee data
    m.employeeId = 101;
    m.salary = 60000;

    // Manager data
    m.department = "Data Analytics";
    m.teamSize = 8;

    m.displayPerson();
    m.displayEmployee();
    m.displayManager();

    return 0;
}
