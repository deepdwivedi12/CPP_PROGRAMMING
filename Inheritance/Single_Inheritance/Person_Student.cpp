#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void displayStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.name = "Deep";
    s.age = 18;
    s.rollNo = 101;

    s.displayPerson();
    s.displayStudent();

    return 0;
}
