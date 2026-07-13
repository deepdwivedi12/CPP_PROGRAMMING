// Question: Write a C++ program to check whether a number is divisible by both 5 and 11.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
    {
        cout << "Divisible";
    }
    else
    {
        cout << "Not Divisible";
    }

    return 0;
}
