// Question: Write a C++ program to calculate total and percentage of a student.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int m1, m2, m3;

    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter 3 Marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void result()
    {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "\nName : " << name << endl;
        cout << "Total : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.result();

    return 0;
}
