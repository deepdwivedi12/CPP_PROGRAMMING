// Question: Write a C++ program to input and display student details using member functions.

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void display()
    {
        cout << "\nRoll No : " << rollNo << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
