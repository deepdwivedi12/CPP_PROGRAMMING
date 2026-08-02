// Question: Write a C++ program to demonstrate constructor and destructor execution.

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Object Created" << endl;
    }

    ~Demo()
    {
        cout << "Object Destroyed" << endl;
    }
};

int main()
{
    Demo d1;

    return 0;
}
