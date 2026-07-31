// Question: Write a C++ program to demonstrate the private access specifier.

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

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
    Student s;

    s.setMarks(95);
    s.display();

    return 0;
}
