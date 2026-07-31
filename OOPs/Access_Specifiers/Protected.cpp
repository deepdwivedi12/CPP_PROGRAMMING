// Question: Write a C++ program to demonstrate the protected access specifier.

#include <iostream>
using namespace std;

class Student
{
protected:
    int marks;
};

class Result : public Student
{
public:
    void setMarks(int m)
    {
        marks = m;
    }

    void display()
    {
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Result r;

    r.setMarks(90);
    r.display();

    return 0;
}
