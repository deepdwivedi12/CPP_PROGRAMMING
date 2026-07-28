// Question: Write a C++ program to create a Student class.

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
