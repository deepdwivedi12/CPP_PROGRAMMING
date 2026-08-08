// Question: Write a C++ program to calculate the area of different shapes using function overloading.

#include <iostream>
using namespace std;

class Shape
{
public:

    // Area of Square
    int area(int side)
    {
        return side * side;
    }

    // Area of Rectangle
    int area(int length, int width)
    {
        return length * width;
    }

    // Area of Circle
    double area(double radius)
    {
        return 3.14 * radius * radius;
    }

    // Area of Triangle
    double area(double base, double height)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape s;

    cout << "Area of Square = "
         << s.area(5) << endl;

    cout << "Area of Rectangle = "
         << s.area(10, 5) << endl;

    cout << "Area of Circle = "
         << s.area(7.0) << endl;

    cout << "Area of Triangle = "
         << s.area(10.0, 5.0) << endl;

    return 0;
}
