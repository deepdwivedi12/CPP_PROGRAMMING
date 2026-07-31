// Question: Write a C++ program to demonstrate public and private members.

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;

private:
    double salary;

public:
    void setSalary(double s)
    {
        salary = s;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Deep";
    e.setSalary(50000);

    e.display();

    return 0;
}
