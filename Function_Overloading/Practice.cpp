// Question: Write a C++ program to create a Calculator class using function overloading.

#include <iostream>
using namespace std;

class Calculator
{
public:

    // Add two numbers
    int add(int a, int b)
    {
        return a + b;
    }

    // Add three numbers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Multiply two numbers
    int multiply(int a, int b)
    {
        return a * b;
    }

    // Multiply three numbers
    int multiply(int a, int b, int c)
    {
        return a * b * c;
    }

    // Find maximum of two numbers
    int maximum(int a, int b)
    {
        return (a > b) ? a : b;
    }

    // Find maximum of three numbers
    int maximum(int a, int b, int c)
    {
        if(a > b && a > c)
            return a;

        if(b > c)
            return b;

        return c;
    }
};

int main()
{
    Calculator c;

    cout << "Addition of 2 numbers: "
         << c.add(10, 20) << endl;

    cout << "Addition of 3 numbers: "
         << c.add(10, 20, 30) << endl;

    cout << "Multiplication of 2 numbers: "
         << c.multiply(5, 4) << endl;

    cout << "Multiplication of 3 numbers: "
         << c.multiply(2, 3, 4) << endl;

    cout << "Maximum of 2 numbers: "
         << c.maximum(10, 25) << endl;

    cout << "Maximum of 3 numbers: "
         << c.maximum(10, 25, 15) << endl;

    return 0;
}
