// Question: Write a C++ program to find the HCF (GCD) of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "HCF = " << a;

    return 0;
}
