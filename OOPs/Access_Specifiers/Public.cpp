// Question: Write a C++ program to demonstrate the public access specifier.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student s;

    s.name = "Deep";
    s.age = 18;

    cout << "Name : " << s.name << endl;
    cout << "Age : " << s.age << endl;

    return 0;
}
