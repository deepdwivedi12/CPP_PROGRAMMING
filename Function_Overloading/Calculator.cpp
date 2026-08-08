// Question: Write a C++ program to create a calculator using function overloading.

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

    // Subtract two numbers
    int subtract(int a, int b)
    {
        return a - b;
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

    // Divide two numbers
    double divide(double a, double b)
    {
        return a / b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition of 2 numbers = "
         << c.add(10, 20) << endl;

    cout << "Addition of 3 numbers = "
         << c.add(10, 20, 30) << endl;

    cout << "Subtraction = "
         << c.subtract(20, 10) << endl;

    cout << "Multiplication of 2 numbers = "
         << c.multiply(5, 4) << endl;

    cout << "Multiplication of 3 numbers = "
         << c.multiply(2, 3, 4) << endl;

    cout << "Division = "
         << c.divide(10, 2) << endl;

    return 0;
}
