// Question: Write a C++ program to create a Rectangle class and calculate area.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;

    r.length = 10;
    r.width = 5;

    cout << "Area = " << r.area() << endl;

    return 0;
}
