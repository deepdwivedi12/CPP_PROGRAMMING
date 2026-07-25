// Question: Write a C++ program to input and display a string.

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str); 

    cout << "String = " << str;

    return 0;
}
