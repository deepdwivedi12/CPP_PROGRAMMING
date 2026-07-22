// Question: Write a C++ program to find the area of a circle using a function.

#include <iostream>
using namespace std;

float areaCircle(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << areaCircle(radius);

    return 0;
}
