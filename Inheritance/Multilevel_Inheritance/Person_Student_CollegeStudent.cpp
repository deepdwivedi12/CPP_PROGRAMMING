// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using Person, Student, and CollegeStudent.

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void displayStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class CollegeStudent : public Student
{
public:
    string course;

    void displayCourse()
    {
        cout << "Course: " << course << endl;
    }
};

int main()
{
    CollegeStudent s;

    s.name = "Deep";
    s.age = 18;
    s.rollNo = 101;
    s.course = "B.Tech CSE";

    s.displayPerson();
    s.displayStudent();
    s.displayCourse();

    return 0;
}
