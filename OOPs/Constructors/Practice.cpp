// Question: Write a C++ program to calculate the area of a rectangle using a constructor.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length,width;

public:
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }

    void area()
    {
        cout<<"Area = "<<length*width<<endl;
    }
};

int main()
{
    Rectangle r(10,5);

    r.area();

    return 0;
}
