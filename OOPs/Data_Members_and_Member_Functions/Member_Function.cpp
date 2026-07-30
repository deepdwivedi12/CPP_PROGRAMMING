// Question: Write a C++ program to demonstrate member functions.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void display()
    {
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student s;

    s.name = "Deep";
    s.display();

    return 0;
}
