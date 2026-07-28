// Question: Write a C++ program to create an Employee class.

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    double salary;

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.id = 101;
    e.name = "Deep";
    e.salary = 45000;

    e.display();

    return 0;
}
