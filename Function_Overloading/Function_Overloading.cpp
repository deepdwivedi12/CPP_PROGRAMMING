// Question: Write a C++ program to demonstrate basic function overloading.

#include <iostream>
using namespace std;

class Demo
{
public:
    void show()
    {
        cout << "No Parameters" << endl;
    }

    void show(int x)
    {
        cout << "Integer: " << x << endl;
    }
};

int main()
{
    Demo d;

    d.show();
    d.show(10);

    return 0;
}
