// Write a C++ program to check whether a number is even or odd using a function.
#include <iostream>
using namespace std;

void evenOdd(int n)
{
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    evenOdd(num);

    return 0;
}
