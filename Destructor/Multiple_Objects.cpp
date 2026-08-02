// Question: Write a C++ program to demonstrate destructors with multiple objects.

#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor Called" << endl;
    }

    ~Student()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    return 0;
}
