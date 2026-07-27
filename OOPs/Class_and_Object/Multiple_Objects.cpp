// Question: Write a C++ program to create multiple objects.

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
        cout << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.name = "Deep";
    s1.age = 18;

    s2.name = "Rahul";
    s2.age = 20;

    s1.display();
    s2.display();

    return 0;
}
