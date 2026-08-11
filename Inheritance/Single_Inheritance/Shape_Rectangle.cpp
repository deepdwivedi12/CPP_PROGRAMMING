// Question: Write a C++ program to demonstrate Single Inheritance using Shape and Rectangle.

#include <iostream>
using namespace std;

class Shape
{
public:
    string color;

    void displayColor()
    {
        cout << "Color: " << color << endl;
    }
};

class Rectangle : public Shape
{
public:
    double length;
    double width;

    double area()
    {
        return length * width;
    }

    double perimeter()
    {
        return 2 * (length + width);
    }

    void displayRectangle()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main()
{
    Rectangle r;

    r.color = "Blue";
    r.length = 10;
    r.width = 5;

    r.displayColor();
    r.displayRectangle();

    return 0;
}
