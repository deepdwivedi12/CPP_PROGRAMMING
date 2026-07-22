// Question: Write a C++ program to find the square of a number using a function.

#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square = " << square(num);

    return 0;
}
