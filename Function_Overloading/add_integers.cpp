// Question: Write a C++ program to add two and three integers using function overloading.

#include <iostream>
using namespace std;

class Calculator
{
public:

    // Function to add two numbers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three numbers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    cout << "Sum of Two Numbers = " << c.add(10,20) << endl;

    cout << "Sum of Three Numbers = " << c.add(10,20,30);

    return 0;
}
