// Question: Write a C++ program to find the greatest of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is Greater";
    }
    else
    {
        cout << b << " is Greater";
    }

    return 0;
}
