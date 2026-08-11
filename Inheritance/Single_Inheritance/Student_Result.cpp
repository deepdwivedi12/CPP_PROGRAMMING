// Question: Write a C++ program to demonstrate Single Inheritance using Student and Result.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    int maths;
    int science;
    int english;

    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Result : public Student
{
public:
    int total;
    double percentage;

    void calculateResult()
    {
        total = maths + science + english;
        percentage = total / 3.0;
    }

    void displayResult()
    {
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;

    r.name = "Deep";
    r.rollNo = 101;

    r.maths = 85;
    r.science = 90;
    r.english = 80;

    r.displayStudent();

    r.calculateResult();

    r.displayResult();

    return 0;
}
