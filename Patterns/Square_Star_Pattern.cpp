// Question: Write a C++ program to print a square star pattern.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
