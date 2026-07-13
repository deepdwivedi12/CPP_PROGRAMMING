// Question: Write a C++ program to find the largest of two numbers using the ternary operator.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    (a > b) ? cout << a << " is Greater" : cout << b << " is Greater";

    return 0;
}
