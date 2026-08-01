// Question: Write a C++ program to demonstrate a default constructor.

#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Default Constructor Called" << endl;
    }
};

int main()
{
    Student s;

    return 0;
}
