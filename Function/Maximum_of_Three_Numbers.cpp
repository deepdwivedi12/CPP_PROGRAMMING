// Question: Write a C++ program to find the maximum of three numbers using a function.

#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Maximum = " << maximum(a, b, c);

    return 0;
}
