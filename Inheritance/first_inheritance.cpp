// Question: Write a C++ program to demonstrate basic inheritance.

#include <iostream>
using namespace std;

// Base Class
class Person
{
public:

    string name;

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

// Derived Class
class Student : public Person
{
public:

    int rollNo;

    void displayRollNo()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.name = "Deep";
    s.rollNo = 101;

    s.displayName();
    s.displayRollNo();

    return 0;
}
