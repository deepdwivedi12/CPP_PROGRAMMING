// Question: Write a C++ program to demonstrate a basic destructor.

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
    Student s;

    return 0;
}
