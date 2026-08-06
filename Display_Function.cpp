// Question: Write a C++ program to overload display() function.

#include <iostream>
using namespace std;

class Student
{
public:

    void display()
    {
        cout << "No Details Available" << endl;
    }

    void display(string name)
    {
        cout << "Name : " << name << endl;
    }

    void display(string name, int age)
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    Student s;

    s.display();

    cout << endl;

    s.display("Deep");

    cout << endl;

    s.display("Deep",18);

    return 0;
}
