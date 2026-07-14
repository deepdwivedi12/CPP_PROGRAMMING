// Question: Write a C++ program to check whether a number is even or odd using switch case.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2)
    {
        case 0:
            cout << "Even Number";
            break;

        case 1:
            cout << "Odd Number";
            break;
    }

    return 0;
}
