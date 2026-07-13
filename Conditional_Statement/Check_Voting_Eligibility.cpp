// Question: Write a C++ program to check whether a person is eligible for voting.

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible for Voting";
    }
    else
    {
        cout << "Not Eligible for Voting";
    }

    return 0;
}
