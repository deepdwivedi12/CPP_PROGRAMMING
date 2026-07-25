// Question: Write a C++ program to find the length of a string.

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length = " << str.length();

    return 0;
}
