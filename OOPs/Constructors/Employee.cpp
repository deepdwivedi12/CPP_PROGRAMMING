// Question: Write a C++ program to initialize employee details using a constructor.

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee(int i,double s)
    {
        id=i;
        salary=s;
    }

    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main()
{
    Employee e(101,50000);

    e.display();

    return 0;
}
