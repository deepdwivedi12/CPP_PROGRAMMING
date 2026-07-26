// Question: Write a C++ program to count vowels and consonants in a string.

#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}
