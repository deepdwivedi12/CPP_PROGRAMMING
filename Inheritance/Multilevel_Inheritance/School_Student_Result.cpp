// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using School, Student, and Result.

#include <iostream>
using namespace std;

class School
{
public:
    string schoolName;

    void displaySchool()
    {
        cout << "School: " << schoolName << endl;
    }
};

class Student : public School
{
public:
    string name;
    int rollNo;

    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Result : public Student
{
public:
    int marks;

    void displayResult()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.schoolName = "CM Rise School";
    r.name = "Deep";
    r.rollNo = 101;
    r.marks = 85;

    r.displaySchool();
    r.displayStudent();
    r.displayResult();

    return 0;
}
