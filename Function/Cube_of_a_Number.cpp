// Question: Write a C++ program to find the cube of a number using a function.

#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Cube = " << cube(num);

    return 0;
}
