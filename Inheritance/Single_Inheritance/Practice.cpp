// Question: Write a C++ program to demonstrate Single Inheritance using Person and Employee.

#include <iostream>
using namespace std;

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

class Employee : public Person
{
public:
    int employeeId;
    double monthlySalary;

    double calculateAnnualSalary()
    {
        return monthlySalary * 12;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Deep";
    e.age = 18;

    e.employeeId = 101;
    e.monthlySalary = 50000;

    e.displayPerson();
    e.displayEmployee();

    return 0;
}
