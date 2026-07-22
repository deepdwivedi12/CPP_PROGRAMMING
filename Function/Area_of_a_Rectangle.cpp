// Question: Write a C++ program to find the area of a rectangle using a function.

#include <iostream>
using namespace std;

int areaRectangle(int length, int width)
{
    return length * width;
}

int main()
{
    int length, width;

    cout << "Enter length and width: ";
    cin >> length >> width;

    cout << "Area = " << areaRectangle(length, width);

    return 0;
}
