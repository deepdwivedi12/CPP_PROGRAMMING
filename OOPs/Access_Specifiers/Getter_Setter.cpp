// Question: Write a C++ program to demonstrate getter and setter methods.

#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s;

    s.setAge(18);

    cout << "Age : " << s.getAge() << endl;

    return 0;
}
