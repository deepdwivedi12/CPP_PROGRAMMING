// Question: Write a C++ program to demonstrate Class and Object.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Deep";
    s1.age = 18;

    s1.display();

    return 0;
}
