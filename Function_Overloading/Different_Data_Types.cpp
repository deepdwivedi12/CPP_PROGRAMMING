// Question: Write a C++ program to demonstrate function overloading using different data types.

#include <iostream>
using namespace std;

class Display
{
public:

    void show(int x)
    {
        cout << "Integer : " << x << endl;
    }

    void show(double x)
    {
        cout << "Double : " << x << endl;
    }

    void show(char x)
    {
        cout << "Character : " << x << endl;
    }

    void show(string x)
    {
        cout << "String : " << x << endl;
    }
};

int main()
{
    Display d;

    d.show(100);

    d.show(10.5);

    d.show('A');

    d.show("Deep");

    return 0;
}
