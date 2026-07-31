// Question: Write a C++ program to calculate annual salary using private members.

#include <iostream>
using namespace std;

class Employee
{
private:
    double monthlySalary;

public:
    void input()
    {
        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }

    void annualSalary()
    {
        cout << "Annual Salary : " << monthlySalary * 12 << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.annualSalary();

    return 0;
}
