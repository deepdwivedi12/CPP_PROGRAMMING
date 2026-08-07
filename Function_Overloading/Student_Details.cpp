// Question: Write a C++ program to demonstrate function overloading using student details.

#include <iostream>
using namespace std;

class Student
{
public:

    void studentDetails(string name)
    {
        cout << "Name : " << name << endl;
    }

    void studentDetails(string name, int age)
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }

    void studentDetails(string name, int age, double marks)
    {
        cout << "Name  : " << name << endl;
        cout << "Age   : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;

    cout << "Student 1" << endl;
    s.studentDetails("Deep");

    cout << endl;

    cout << "Student 2" << endl;
    s.studentDetails("Rahul",20);

    cout << endl;

    cout << "Student 3" << endl;
    s.studentDetails("Amit",19,91.5);

    return 0;
}
