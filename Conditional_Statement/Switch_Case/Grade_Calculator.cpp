// Question: Write a C++ program to print grade using switch case.

#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Enter Grade (A/B/C/D/F): ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Average";
            break;

        case 'F':
            cout << "Fail";
            break;

        default:
            cout << "Invalid Grade";
    }

    return 0;
}
