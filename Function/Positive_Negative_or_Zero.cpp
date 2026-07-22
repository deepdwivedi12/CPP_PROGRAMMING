// Question: Write a C++ program to check whether a number is positive, negative, or zero using a function.

#include <iostream>
using namespace std;

void checkNumber(int n)
{
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    checkNumber(num);

    return 0;
}
