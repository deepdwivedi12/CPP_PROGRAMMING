// Question: Write a C++ program to calculate the area of a rectangle using private data members.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void input()
    {
        cout << "Enter Length and Width: ";
        cin >> length >> width;
    }

    void area()
    {
        cout << "Area = " << length * width << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.area();

    return 0;
}
