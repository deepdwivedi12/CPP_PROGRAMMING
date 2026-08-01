// Question: Write a C++ program to demonstrate constructor overloading.

#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Default Constructor" << endl;
    }

    Student(string name)
    {
        cout << "Name : " << name << endl;
    }

    Student(string name,int age)
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Deep");
    Student s3("Rahul",20);

    return 0;
}
