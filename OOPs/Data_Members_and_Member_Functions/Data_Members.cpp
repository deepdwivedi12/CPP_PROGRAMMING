// Question: Write a C++ program to demonstrate data members.

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s;

    s.rollNo = 101;
    s.name = "Deep";
    s.marks = 92.5;

    cout << "Roll No : " << s.rollNo << endl;
    cout << "Name : " << s.name << endl;
    cout << "Marks : " << s.marks << endl;

    return 0;
}
