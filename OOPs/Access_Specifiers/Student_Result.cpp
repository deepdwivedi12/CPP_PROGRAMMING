// Question: Write a C++ program to calculate percentage using private data members.

#include <iostream>
using namespace std;

class Student
{
private:
    int m1, m2, m3;

public:
    void input()
    {
        cout << "Enter 3 Marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void result()
    {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

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
