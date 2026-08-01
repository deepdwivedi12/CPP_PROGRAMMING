// Question: Write a C++ program to create an array of objects using constructors.

#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Object Created" << endl;
    }
};

int main()
{
    Student s[3];

    return 0;
}
