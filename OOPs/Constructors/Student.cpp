// Question: Write a C++ program to initialize student details using a constructor.

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;

public:
    Student(string n,int r)
    {
        name=n;
        roll=r;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
    }
};

int main()
{
    Student s("Deep",101);

    s.display();

    return 0;
}
