// Question: Write a C++ program to find the sum of first N natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum;

    return 0;
}
