// Question: Write a C++ program to calculate the area of a circle using a member function.

#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;

    void input()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Area = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Circle c;

    c.input();
    c.area();

    return 0;
}
