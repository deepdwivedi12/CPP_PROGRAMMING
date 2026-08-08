// Question: Write a C++ program to demonstrate default arguments in a function.

#include <iostream>
using namespace std;

class Student
{
public:

    void display(string name, int age = 18)
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

int main()
{
    Student s;

    s.display("Deep");

    cout << endl;

    s.display("Rahul", 20);

    return 0;
}
