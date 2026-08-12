// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Student and Sports as base classes and Result as the derived class.

#include <iostream>
using namespace std;

class Student
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

class Sports
{
public:
    string sportName;
    int score;

    void displaySports()
    {
        cout << "Sport: " << sportName << endl;
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Student, public Sports
{
public:
    void displayResult()
    {
        cout << "Result displayed successfully." << endl;
    }
};

int main()
{
    Result r;

    r.name = "Deep";
    r.rollNo = 101;

    r.sportName = "Cricket";
    r.score = 85;

    r.displayStudent();
    r.displaySports();
    r.displayResult();

    return 0;
}
