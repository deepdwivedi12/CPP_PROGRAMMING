// Question: Write a C++ program to demonstrate a parameterized constructor.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s("Deep", 18);

    s.display();

    return 0;
}
