// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using University, Student, and GraduateStudent.

#include <iostream>
using namespace std;

class University
{
public:
    string universityName;

    void displayUniversity()
    {
        cout << "University: " << universityName << endl;
    }
};

class Student : public University
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

class GraduateStudent : public Student
{
public:
    string specialization;

    void displaySpecialization()
    {
        cout << "Specialization: " << specialization << endl;
    }
};

int main()
{
    GraduateStudent g;

    g.universityName = "SAGE University";
    g.name = "Deep";
    g.rollNo = 101;
    g.specialization = "Data Analytics";

    g.displayUniversity();
    g.displayStudent();
    g.displaySpecialization();

    return 0;
}
