// Question: Write a C++ program to calculate the area of a square and rectangle using function overloading.

#include <iostream>
using namespace std;

class Area
{
public:

    // Square
    int area(int side)
    {
        return side * side;
    }

    // Rectangle
    int area(int length, int width)
    {
        return length * width;
    }
};

int main()
{
    Area a;

    cout << "Area of Square = " << a.area(5) << endl;

    cout << "Area of Rectangle = " << a.area(10,5);

    return 0;
}
