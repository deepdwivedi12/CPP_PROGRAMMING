// Question: Write a C++ program to calculate annual salary of an employee.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double monthlySalary;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Annual Salary : " << monthlySalary * 12 << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
