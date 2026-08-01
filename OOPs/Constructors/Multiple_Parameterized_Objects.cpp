// Question: Write a C++ program to create multiple objects using a parameterized constructor.

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
        cout << name << " - " << age << endl;
    }
};

int main()
{
    Student s1("Deep",18);
    Student s2("Rahul",20);
    Student s3("Amit",19);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
