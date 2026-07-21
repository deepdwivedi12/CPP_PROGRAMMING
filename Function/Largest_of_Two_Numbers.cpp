// Write a C++ program to find the largest of two numbers using a function.

#include <iostream>
using namespace std;

int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Largest = " << largest(x, y);

    return 0;
}
