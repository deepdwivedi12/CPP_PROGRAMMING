// Question: Write a C++ program to print an alphabet triangle pattern.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
