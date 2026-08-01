// Question: Write a C++ program to initialize data members using a default constructor.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
        name = "Deep";
        age = 18;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
