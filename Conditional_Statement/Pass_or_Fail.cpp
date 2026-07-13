// Question: Write a C++ program to check whether a student is pass or fail.

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 33)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}
