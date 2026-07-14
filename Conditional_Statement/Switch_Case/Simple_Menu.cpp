// Question: Write a C++ program to create a simple menu using switch case.

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Home\n";
    cout << "2. About\n";
    cout << "3. Contact\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Home Page";
            break;

        case 2:
            cout << "About Page";
            break;

        case 3:
            cout << "Contact Page";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
