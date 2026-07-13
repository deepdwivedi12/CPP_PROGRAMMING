// Question: Write a C++ program to find the greatest of three numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is Greatest";
    }
    else if (b > a && b > c)
    {
        cout << b << " is Greatest";
    }
    else
    {
        cout << c << " is Greatest";
    }

    return 0;
}
