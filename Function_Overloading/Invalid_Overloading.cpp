// Question: Write a C++ program to demonstrate invalid function overloading.

#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    double add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << c.add(10, 20);

    return 0;
}
