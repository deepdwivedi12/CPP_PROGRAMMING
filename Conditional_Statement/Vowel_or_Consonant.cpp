// Question: Write a C++ program to check whether an alphabet is a vowel or consonant.

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}
